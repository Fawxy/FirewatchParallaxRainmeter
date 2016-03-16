; ____   __   ____  ____  _  _   __   ____   ___  _  _        ____   __   ____   __   __    __     __   _  _
;(  __) (  ) (  _ \(  __)/ )( \ / _\ (_  _) / __)/ )( \      (  _ \ / _\ (  _ \ / _\ (  )  (  )   / _\ ( \/ )
; ) _)   )(   )   / ) _) \ /\ //    \  )(  ( (__ ) __ (       ) __//    \ )   //    \/ (_/\/ (_/\/    \ )  (
;(__)   (__) (__\_)(____)(_/\_)\_/\_/ (__)  \___)\_)(_/      (__)  \_/\_/(__\_)\_/\_/\____/\____/\_/\_/(_/\_)

; Author: Chris Byatt (/u/TheFawxyOne or Fawxy)
; v1.5.0
; DA: http://www.TheFawxyOne.deviantart.com
; Rainmeter.net Thread: https://forum.rainmeter.net/viewtopic.php?f=27&t=22896
; Plugin to make your own: https://forum.rainmeter.net/viewtopic.php?f=18&t=22900
; http://www.chrisbyatt.co.uk
;==============================================

; This file is for settings for your parallax.

; NOTE: To configure the apps for your launcher look in Launcher/Apps.txt
; If your icon name for the launcher does not match the app name exactly replace #AppN# in [!SetVariable "IconName" "#AppN#.png" "Firewatch Parallax\Logo"] with the name of the icon in Launcher/launcher.ini!

[Variables]


; THEME SETTINGS
; Set this to the width of the display you want the theme on
ThemeDisplayWidth=1920

; Set this to one pixel less than the height of the display you want the theme on
ThemeDisplayHeight=1079


; VISUALISER SETTINGS
; Set this to the colour of the visualiser
ItemColor=FFFFFF

; This is to hide the visualizer when no music player is playing
HideWhenNotPlaying=0

; Hide the visualizer when nothing is playing
HideWhenVolumeZero=0

; Number of bars
NumOfItems=96

; Length of the bar
VariationMax=50


; TIME REACTIVE SETTINGS

; To find out your location ID  browse or search for your city from http://weather.yahoo.com/.
; The location ID is in the URL for the forecast page for that city.
; You can also get the Location ID by entering your zip code on the home page.
; For example, if you search for Los Angeles on the Weather home page,
; the forecast page for that city is http://weather.yahoo.com/united-states/california/los-angeles-2442047/.
; The Location ID is 2442047
LocationID=26351604
