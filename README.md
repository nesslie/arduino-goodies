# Arduino Projects
These are a collection of some of the Arduino projects I've been worked on over the years. They aren't necessarily very software heavy and they're from junior-senior year of highschool but I thought it'd be fun to see the projects have some place online!

## Tweeting Mailbox
### Why would you want a mailbox to tweet at you?
No reason in particular. Was tossing ideas around with a friend and we thought that it'd be hilarious to make one of these since one of our teachers was notorious for not checking his mailbox.
### How does it work?
There are three main components to achieve this. The sensors, the microcontroller, and the website automation.
1. Sensors
    - The backbone of finding out if a piece of mail is inserted into the mailbox is a simple ultrasonic sensor. We designed a little housing to mount to the top of the mailbox so every single time a piece of mail is inserted, it will sense a distance closer to the top than normal. From there...
2. Microcontroller
    - For the brains of the project, I used a Photon microcontroller by Particle. It's connected to the internet by default, so when the ultrasonic sensor detects a change in distance it will publish an event online where...
3. IFTTT is always listenting
    - IFTTT is a web alert service that has built in integration with the Photon. IFTTT then tweets the date, time and tags our teacher on twitter.
### The results:
<img width="586" alt="Screen Shot 2022-02-22 at 6 50 43 PM" src="https://user-images.githubusercontent.com/25680925/155254446-77278b57-afcb-4783-88dc-5cbc467c32c8.jpg">
<img width="586" alt="Screen Shot 2022-02-22 at 6 50 43 PM" src="https://user-images.githubusercontent.com/25680925/155254268-9e5d3509-6188-40a4-8936-036b100ab073.png">

They speak for themselves honestly. The housing is a little chunky but not bad for some highschoolers messing around.
