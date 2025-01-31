# CHROMATIC ABERRATION

A helpful 4 band colorizer/solarizer specially optimized for filming bigfoot

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer0.png)

This is currently a bonus image for the Waaave Pool raspberry pi Distro, with some vague plans to develop it further into a larger scale unit.  Check over here 

https://github.com/ex-zee-ex/waaaave_pool

for more details on how/what/why a waaave pool is and how to set one up!


![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer1.png)

as always, building from the folders above is only recommended if you know what openFrameworks is and what a makefile is.  otherwise you can download this link 

https://drive.google.com/open?id=1ubx2S5PZ4g8e8Qj7U5LgeZN-BN2bN5pe

burn it to an sd card, pop it into yr waaave pool set up and go wild!

## Chromatic Aberration: the search for sasquatch

For many years humankind has yearned to seek the answers to the burning questions: are mysteries real? Are legends merely the wisps of fantasies or do they, like the thread of Ariadne, lead us out of the labrynth of "conventional science" and into the realm of veridinal phenomenological discoveries?  What are we to make of these stories we have told ourselves over the millenia of memetic cultural evolution, these stories of the Wendingo, the Yeti, the Skinwalker.  What sense can we make of the archeological findings of non human hominids all over the world?  Who really built the pyramids?  How did the reptile people escape the cataclysms of Atlantis?  Why do frogs rain from the sky and why do voices cry out from deep holes in the earth?  Did a sasquatch drop a nuclear bomb on Tunguska in 1908?  Did a yeti write the Voynich Manuscript? Did the noble bigfoot assassinate John F. Kennedy as a part of some complex and ancient bigfoot "killing of the king" fertility ritual?  We may never know the answers to these questions.  We may never know the answers to any questions at all!  Perhaps what we need is to unask the questions and then perhaps we can receive some nonanswers!


![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer2.png)

I have analyzed the data available and have come to one solid conclusion:  The lack of proof of non human hominid existence is primarily due to the lack of high quality real time multiband colorizer/solarizer video processing units.  Imagine if you will, if Patterson and Gimlin had access to a 4 band colorizer and brightness attenuator while they were filming? What would science say to an enhanced footage wherein the brightness scale of the input video was split into 4 bands (0-.25, .25-.5, .5-.75, .75-1) where each band had separate hardware controls for assigning hue, saturation, and reassigning offsets to brightness?  But thats not all!  They could also have used the EIGHT (8) lfos (2 for each band 1 for hue and one for brightness) to oscillate hue and brightness in order to draw attention to salient points of interest in the footage!  I have a hunch I know what science would say.  Science: "Thats pretty fucking dank yo".

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer3.png)

## Controls

![](https://github.com/ex-zee-ex/pictures/blob/master/20200206_122907.jpg)


All controls for this are Unipolar!

1-4 Saturation controls for bands 1-4 respectively

5-8 Lfo rate for hue/brightness for bands 1-4 respectively

9-12 (default) Hue select for bands 1-4, when S button is pressed next to each slider then the mode switches to Brightness offset for each bands

13-16 (defalult) amplitude for Hue Lfo, when S button is pressed next to each slider then the mode switches to amplitude for Brightness offset for each band, this also switches 5-8 to control brightness lfo rates.

a,b,c - switches on and off different curves for assigning hue from brightness

More controls forthcoming as i figure out more crazy stuff to do with this set up

If you have any suggestions feel free to let me know over in the video_waaaves fb group!

https://www.facebook.com/groups/440566853501750/

## Community
Facebook is a hellscape but the link above has been left for historical purposes.

You can catch Andrei Jay on [scanlines.xyz](https://scanlines.xyz/u/andrei_jay/summary), the official Discord (You'll have to search for it because the invite link expires…) or [Polyphase](https://polyphaseportal.xyz/about/)

## Platforms

This has been fully updated and tested as building and working on Pi Zero 2 W, Pi 3b+, Pi 4, and Pi 5 on openFrameworks 0.12 on Buster Lite. It was developed on Mac and will build and work there too. I suspect that Windows and Linux builds are also entirely possible but have not been tested due to a lack of available hardware so your mileage may vary.

## Notes

For this to build for Raspberry Pi you will need to add jack to the `PROJECT_LDFLAGS` in the `config.make` file due to the `ofxMidi` dependency:

```
PROJECT_LDFLAGS += -ljack
```

By default the ofVideoGrabber is set to `deviceID(0)` but can be changed by connecting a keyboard or numpad and pressing the `0` key. For some reason the Pi Zero 2 will select the on-board hardware decoder channels before an external USB capture device so you may want cycle through the options - keep an eye on the terminal as you'll know it when you see it.

On Linux and Mac systems port ID `0` appears to be passthrough so it has been explicitely set to `1` but be sure to have your midi controller plugged in before use or it will default to `0`. The `9` key will cycle through available MIDI ports.

Building this on the Zero 2 is possible but it will take an absolute age. It is definitely better to either cross compile on a more powerful machine or as is my preference a Pi 3b+ and just transferring the binary across from the network or USB drive.

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer4.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer5.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer6.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer7.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer8.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer9.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer10.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer11.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer12.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer13.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer14.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer15.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer16.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer17.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer18.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer19.png)

![](https://github.com/ex-zee-ex/pictures/blob/master/colorizer20.png)
