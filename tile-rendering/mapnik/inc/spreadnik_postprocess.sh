#!/bin/bash
echo "postprocessing spreadnik stylesheets..."
#sed -i "s/(\[cycleway\] = 'lane')/(\[cycleway\] = 'lane') or (\[cycleway:right\] = 'lane')/" style-highways-top.xml.inc
#sed -i "s/(\[cycleway\] = 'track')/(\[cycleway\] = 'track') or (\[cycleway:right\] = 'track')/" style-highways-top.xml.inc

#sed -i "s/(\[cycleway\] = 'lane')/(\[cycleway\] = 'lane') or (\[cycleway:left\] = 'lane')/" style-highways-top2.xml.inc
#sed -i "s/(\[cycleway\] = 'track')/(\[cycleway\] = 'track') or (\[cycleway:left\] = 'track')/" style-highways-top2.xml.inc

# remove annoying zeros
sed -i -e 's/,0/,/g' style-highways.csv

# process triggers

# trigger_cycleway 
#(
#    [highway] = 'cycleway' or
#    ([highway] = 'footway' and [bicycle] = 'compulsory') or
#    ([highway] = 'path' and [bicycle] = 'compulsory') or
#    ([public_transport] = 'platform' and [bicycle] = 'compulsory')
#)
#
# cyclable path (with a road bike)
#(
#  (
#    (
#       (
#           ([access] = 'allowed' or [access] = 'compulsory') and not [bicycle] = 'forbidden'
#       )
#    ) or
#    (
#       ([access] = 'forbidden' or [highway] = 'footway') and ([bicycle] = 'allowed' or [bicycle] = 'compulsory')
#    )
#  ) and (
#    ([highway] = 'footway' and [bicycle] = 'allowed') or
#    ([highway] = 'path' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1') ) or
#    ([highway] = 'track' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1') )
#  )
#)
# 
# cycleForbidden
#(
#    ([highway] = 'bridleway' and [bicycle] = 'forbidden') or 
#    ([highway] = 'footway' and not ([bicycle] = 'allowed' or [bicycle]='compulsory')) or
#    ([highway] = 'path' and ([bicycle] = 'forbidden' or ([access]='forbidden' and not([bicycle]='allowed' or [bicycle]='compulsory')))) or
#    ([highway] = 'track' and ([bicycle] = 'forbidden' or ([access]='forbidden' and not([bicycle]='allowed' or [bicycle]='compulsory'))))
#)
#(
#    [cycleway] = 'lane' or 
#    [cycleway] = 'track' or 
#    [cycleway] = 'bus_lane' or 
#    [cycleway:right] = 'lane' or 
#    [cycleway:right] = 'track' or 
#    [cycleway:right] = 'bus_lane'
#)
#(
#    ([cycleway] = 'lane' and not [oneway] = 'yes') or 
#    ([cycleway] = 'track' and not [oneway] = 'yes') or 
#    ([cycleway] = 'share_busway' and not [oneway] = 'yes') or 
#    [cycleway] = 'opposite_lane' or 
#    [cycleway] = 'opposite_track' or 
#    [cycleway:left] = 'lane' or 
#    [cycleway:left] = 'track' or 
#    [cycleway:left] = 'share_busway'
#)
#(
#    [cycleway] = 'track' or 
#    [cycleway:right] = 'track'
#)
#(
#    [cycleway] = 'track' or 
#    [cycleway:left] = 'track' or
#    [cycleway] = 'opposite_track' 
#)
#(
#    ([access] = 'forbidden' and not [bicycle] = 'allowed') or
#    [bicycle] = 'forbidden'
#)



for i in `ls style-*.xml.inc`
do
    replace "[highway] = 'trigger_cycleAllowed'" "((((([access] = 'allowed' or [access] = 'compulsory') and not [bicycle] = 'forbidden')) or (([access] = 'forbidden' or [highway] = 'footway') and ([bicycle] = 'allowed' or [bicycle] = 'compulsory'))) and (([highway] = 'footway' and [bicycle] = 'allowed') or ([highway] = 'path' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1') ) or ([highway] = 'track' and ([surface] = 'paved' or [surface] = 'concrete' or [surface] = 'asphalt' or [tracktype] = 'grade1'))))" < $i > $i.tmp
    replace "[highway] = 'trigger_cycleForbidden'" "(([highway] = 'bridleway' and [bicycle] = 'forbidden') or ([highway] = 'footway' and not ([bicycle] = 'allowed' or [bicycle]='compulsory')) or ([highway] = 'path' and ([bicycle] = 'forbidden' or ([access]='forbidden' and not([bicycle]='allowed' or [bicycle]='compulsory')))) or ([highway] = 'track' and ([bicycle] = 'forbidden' or ([access]='forbidden' and not([bicycle]='allowed' or [bicycle]='compulsory')))))" < $i.tmp > $i
    replace "[cycleway] = 'trigger_right'" "([cycleway] = 'lane' or [cycleway] = 'track' or [cycleway] = 'bus_lane' or [cycleway:right] = 'lane' or [cycleway:right] = 'track' or [cycleway:right] = 'bus_lane')" < $i > $i.tmp
    replace "[cycleway] = 'trigger_left'" "(([cycleway] = 'lane' and not [oneway] = 'yes') or ([cycleway] = 'track' and not [oneway] = 'yes') or ([cycleway] = 'share_busway' and not [oneway] = 'yes') or [cycleway] = 'opposite_lane' or [cycleway] = 'opposite_track' or [cycleway:left] = 'lane' or [cycleway:left] = 'track' or [cycleway:left] = 'share_busway')" < $i.tmp > $i
    replace "[trigger] = 'rightTrack'" "([cycleway] = 'track' or [cycleway:right] = 'track')" < $i > $i.tmp
    replace "[trigger] = 'leftTrack'" "([cycleway] = 'track' or [cycleway:left] = 'track' or [cycleway] = 'opposite_track')" < $i.tmp > $i
    replace "[access] = 'noCycle'" "(([access] = 'forbidden' and not([bicycle] = 'allowed' or [bicycle] = 'compulsory')) or [bicycle] = 'forbidden')" < $i > $i.tmp
    replace "[highway] = 'trigger_cycleway'" "([highway] = 'cycleway' or ([highway] = 'footway' and [bicycle] = 'compulsory') or ([highway] = 'path' and [bicycle] = 'compulsory') or ([public_transport] = 'platform' and [bicycle] = 'compulsory'))" < $i.tmp > $i
    rm *.tmp
#    mv $i.tmp $i
done



