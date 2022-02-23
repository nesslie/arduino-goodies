# Arduino Projects
These are a collection of some of the Arduino projects I've been worked on over the years. They aren't necessarily very software heavy and they're from junior-senior year of highschool but I thought it'd be fun to see the projects have some place online!

## Arduino Radio
This project was more of an exploration into circuits and electronics than software-related, and the most hair-pulling fun I've had working an arduino project.
### TEA5767 Radio Module
The main piece of the circuit, this is the module that introduced me to the process of reading datasheets. Overall the process wasn't too hard to get started, especially since there is an Arduino Library to automatically change the frequency of the radio but it still gave good practice for connecting to circuits that are more complicated than the ones I had been working with up to that point.
### Amplifier, Rotation and Death
Since the actual electrical signal from the TEA5767 is quite weak, we need an amplifier module to pass the signal through the speaker. However the polarity of my amplifier module actually came reversed so it sent an amplified signal directly to the digital pins of my Arduino nano and fried it 😢. A grevious loss of 2.59. I also succeeded in updating the LCD to display the current radio frequency but it turns out I did not actually save that copy of the code.

The radio is controlled by a rotary encoder to change the frequency channel. In all honesty the code that detects the rotation of the encoder isn't the smoothest but it works just fine for now. Maybe I'll find a way to smooth it out in the future but for now it works.
### Groovy Baby 📻
You can check out the final product [here!](https://youtu.be/exMkGSQtmIo)
As you can hear from the audio, it could've used an extra capacitor on the speaker to smooth out the audio. But after having spent a whopping 24.43$ on all the components, I didn't feel like waiting another 2 months for the capacitors to ship. However I did learn a lot about troubleshooting electronics, signals, and the importance of investing in a multimeter to actually check your components *especially if they're cheap!*

## Tweeting Mailbox
### Why would you want a mailbox to tweet at you?
No reason in particular. Was tossing ideas around with a friend and we thought that it'd be hilarious to make one of these since one of our teachers was notorious for not checking his mailbox.
### How does it work?
There are three main components to achieve this. The sensors, the microcontroller, and the website automation.
1. Sensors
    - The backbone of finding out if a piece of mail is inserted into the mailbox is a simple ultrasonic sensor. We designed a little housing to mount to the top of the mailbox so every single time a piece of mail is inserted, it will sense a distance closer to the top than normal.
2. Microcontroller
    - For the brains of the project, I used a Photon microcontroller by Particle. It's connected to the internet by default, so when the ultrasonic sensor detects a change in distance it will publish an event online where...
3. IFTTT is always listenting
    - IFTTT is a web alert service that has built in integration with the Photon. IFTTT then tweets the date, time and tags our teacher on twitter.
### The results:
<img width="586" alt="Screen Shot 2022-02-22 at 6 50 43 PM" src="https://user-images.githubusercontent.com/25680925/155254446-77278b57-afcb-4783-88dc-5cbc467c32c8.jpg">
<img width="586" alt="Screen Shot 2022-02-22 at 6 50 43 PM" src="https://user-images.githubusercontent.com/25680925/155254268-9e5d3509-6188-40a4-8936-036b100ab073.png">

They speak for themselves honestly. The housing is a little chunky but not bad for some highschoolers messing around.
