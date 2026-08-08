# wafel_ledcolor

changes your power led color (oh my god)

<br/>building is the same for the setup plugin, default color is blue if you weren't smart enough to change it

<br/>cannot guarantee it won't format your mlc on accident but it doesn't for me so you're probably fine (it won't)

<br/>probably doesn't respect the yellow led standby mode does

<br/>plugin "excellently" crafted by yours truly


<br/>credit
<br/>https://github.com/StroopwafelCFW/stroopwafel
<br/>https://github.com/StroopwafelCFW/wafel_setup_mlc
<br/>https://github.com/StroopwafelCFW/minute_minute


<br/>building info

<br/>heres a loop, cycles through red blue and yellow bulbs every half second:
<br/>while (1) {
        SetNotificationLED(NOTIF_LED_RED);
        usleep(500000);
        SetNotificationLED(NOTIF_LED_BLUE);
        usleep(500000);
        SetNotificationLED(NOTIF_LED_YELLOW);
        usleep(500000);
    }


<br/>heres red and yellow bulbs on
    SetNotificationLED(NOTIF_LED_RED | NOTIF_LED_YELLOW);
