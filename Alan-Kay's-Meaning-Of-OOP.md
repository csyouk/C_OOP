# Alan-Kay's Meaning Of OOP.md
- [Quora : What is Alan Kay's definition of Object Oriented?](https://www.quora.com/What-is-Alan-Kays-definition-of-Object-Oriented/answer/Alan-Kay-11)

The other answers are well worth reading. An interesting question arises about terminology: to what extent is it reasonable to try to retain original definitions versus having a term get “softer” in meaning as time passes and new and additional conceptions are formed? (The latter happens in part because of the ways we spontaneously evolve our languages, so trying to legislate against it doesn’t work.)

However, I think “colonizing” a term to get reflected status is not a good practice, because it really weakens the central ideas (for example, C++ is called an “object-oriented language” — and most people argue “it is!” — but it is much too far from the ways I was thinking to be included in any definition I would come up with).

Part of the problem here is that I made a mistake with how the term was coined — I should have picked something else — in hindsight: “server-oriented programming”?

In any case, the “server” metaphor — mentioned by Eric des Courtis below — is good enough here (since I’ve written about and answered questions about “objects” in the past, and especially in the “The Early History of Smalltalk” written for the ACM ca 1993.).

There is a bit of a red herring here because the power of a comprehensive universal building block can also be its downfall. For example, a “server” could choose to allow its encapsulation to be violated — e.g. by making its services to closely resemble data structures acted on by procedures. Here, in my opinion, we would be simulating quite the wrong kinds of things, and devolving back into weak and fragile programming styles. (That is my view of what has mostly happened with “objects” — “real objects” never showed up because most people wanted to retain their data oriented style, etc.)

We could argue that the definition was incomplete — even: poor. It allowed too much discretion on the parts of programmers (this was partly because we used it for our own purposes at Parc and thought — not terribly accurately — that -we- had sufficient discretion to use it wisely (certainly not 100% of the time!)

And … this November will be the 50th anniversary of my “recognition” of the powers of the simple idea of making everything from “encapsulated servers exchanging non-command messages”.

Even though — in my opinion again — the simple idea of making computation systems “be like computers on the Internet” still isn’t generally recognized, much more is needed in programming and systems building than “a great recognition” from 50 years ago which had enormous relative power for about two decades.

For example — today and tomorrow — we should be programming in terms of “requirements and goals” that can manifest a workable system (possibly needing a super-computer).

We should be able to optimize a system like this without touching the requirements and goals part, etc. The feeling of such programming should be like the CAD-SIM-FAB cycles in more developed parts of engineering. In other words, we want to devote most of our attention into “the whats” rather than “the hows”, use most of our energy for design, and we’d like to “ship the design!” (that would be a good slogan for the next few years).

Just as the great language Lisp was first for programming, but then became “a very high level machine code” for higher level ideas, we should see that what was powerful about direct programming with the kinds of object systems we made at Parc and subsequently so many years ago, should now be retained for structural integrity and other pragmatic reasons, but that the code should now be automatically written from much higher level sources. This doesn’t mean that “objects are now hidden”, but that they should be part of the “modeling and designing of ideas and processes” that is the center of what programming needs to be.


- [Dr. Alan Kay on the Meaning of “Object-Oriented Programming”](http://userpage.fu-berlin.de/~ram/pub/pub_jf47ht81Ht/doc_kay_oop_en)



Date: Wed, 23 Jul 2003 09:33:31 -0800

To: Stefan Ram [removed for privacy]

From: Alan Kay [removed for privacy]

Subject: Re: Clarification of "object-oriented"

[some header lines removed for privacy]

Content-Type: text/plain; charset="us-ascii" ; format="flowed"

Content-Length: 4965

Lines: 117



Hi Stefan --



Sorry for the delay but I was on vacation.



At 6:27 PM +0200 7/17/03, Stefan Ram wrote:

>   Dear Dr. Kay,

>

>   I would like to have some authoritative word on the term

>   "object-oriented programming" for my tutorial page on the

>   subject. The only two sources I consider to be "authoritative"

>   are the International Standards Organization, which defines

>   "object-oriented" in "ISO/IEC 2382-15", and you, because,

>   as they say, you have coined that term.



I'm pretty sure I did.



>

>   Unfortunately, it is difficult to find a web page or source

>   with your definition or description of that term. There are

>   several reports about what you might have said in this regard

>   (like "inheritance, polymorphism and encapsulation"), but

>   these are not first-hand sources. I am also aware that later

>   you put more emphasis on "messaging" - but I still would like

>   to know about "object oriented".

>

>   For the records, my tutorial page, and further distribution

>   and publication could you please explain:

>

>     When and where was the term "object-oriented" used first?



At Utah sometime after Nov 66 when, influenced by Sketchpad, Simula,

the design for the ARPAnet, the Burroughs B5000, and my background in

Biology and Mathematics, I thought of an architecture for

programming. It was probably in 1967 when someone asked me what I was

doing, and I said: "It's object-oriented programming".



The original conception of it had the following parts.



  - I thought of objects being like biological cells and/or individual

computers on a network, only able to communicate with messages (so

messaging came at the very beginning -- it took a while to see how to

do messaging in a programming language efficiently enough to be

useful).



  - I wanted to get rid of data. The B5000 almost did this via its

almost unbelievable HW architecture. I realized that the

cell/whole-computer metaphor would get rid of data, and that "<-"

would be just another message token (it took me quite a while to

think this out because I really thought of all these symbols as names

for functions and procedures.



  - My math background made me realize that each object could have

several algebras associated with it, and there could be families of

these, and that these would be very very useful. The term

"polymorphism" was imposed much later (I think by Peter Wegner) and

it isn't quite valid, since it really comes from the nomenclature of

functions, and I wanted quite a bit more than functions. I made up a

term "genericity" for dealing with generic behaviors in a

quasi-algebraic form.



  - I didn't like the way Simula I or Simula 67 did inheritance

(though I thought Nygaard and Dahl were just tremendous thinkers and

designers). So I decided to leave out inheritance as a built-in

feature until I understood it better.



My original experiments with this architecture were done using a

model I adapted from van Wijngaarten's and Wirth's "Generalization of

Algol" and Wirth's Euler. Both of these were rather LISP-like but

with a more conventional readable syntax. I didn't understand the

monster LISP idea of tangible metalanguage then, but got kind of

close with ideas about extensible languages draw from various

sources, including Irons' IMP.



The second phase of this was to finally understand LISP and then

using this understanding to make much nicer and smaller and more

powerful and more late bound understructures. Dave Fisher's thesis

was done in "McCarthy" style and his ideas about extensible control

structures were very helpful. Another big influence at this time was

Carl Hewitt's PLANNER (which has never gotten the recognition it

deserves, given how well and how earlier it was able to anticipate

Prolog).



The original Smalltalk at Xerox PARC came out of the above. The

subsequent Smalltalk's are complained about in the end of the History

chapter: they backslid towards Simula and did not replace the

extension mechanisms with safer ones that were anywhere near as

useful.



>

>     What does "object-oriented [programming]" mean to you?

>     (No tutorial-like introduction is needed, just a short

>     explanation [like "programming with inheritance,

>     polymorphism and encapsulation"] in terms of other concepts

>     for a reader familiar with them, if possible. Also, it is

>     not neccessary to explain "object", because I already have

>     sources with your explanation of "object" from

>     "Early History of Smalltalk".)



(I'm not against types, but I don't know of any type systems that

aren't a complete pain, so I still like dynamic typing.)



OOP to me means only messaging, local retention and protection and

hiding of state-process, and extreme late-binding of all things. It

can be done in Smalltalk and in LISP. There are possibly other

systems in which this is possible, but I'm not aware of them.



Cheers,



Alan



>

>   Thank you,

>

>   Stefan Ram





--

E-Mail of 2003-07-26
Clarification of "object-oriented", 1 [E-Mail]


Date: Sat, 26 Jul 2003 13:47:59 -0800

To: Stefan Ram [removed for privacy]

From: Alan Kay [removed for privacy]

Subject: Re: Clarification of "object-oriented"

[some header lines removed for privacy]

Content-Type: text/plain; charset="us-ascii" ; format="flowed"

Content-Length: 3145

Lines: 68



One of the things I should have mentioned is that there were two main

paths that were catalysed by Simula. The early one (just by accident)

was the bio/net non-data-procedure route that I took. The other one,

which came a little later as an object of study was abstract data

types, and this got much more play.



If we look at the whole history, we see that the proto-OOP stuff

started with ADT, had a little fork towards what I called "objects"

-- that led to Smalltalk, etc.,-- but after the little fork, the CS

establishment pretty much did ADT and wanted to stick with the

data-procedure paradigm. Historically, it's worth looking at the USAF

Burroughs 220 file system (that I described in the Smalltalk

history), the early work of Doug Ross at MIT (AED and earlier) in

which he advocated embedding procedure pointers in data structures,

Sketchpad (which had full polymorphism -- where e.g. the same offset

in its data structure meant "display" and there would be a pointer to

the appropriate routine for the type of object that structure

represented, etc., and the Burroughs B5000, whose program reference

tables were true "big objects" and contained pointers to both "data"

and "procedures" but could often do the right thing if it was trying

to go after data and found a procedure pointer. And the very first

problems I solved with my early Utah stuff was the "disappearing of

data" using only methods and objects. At the end of the 60s (I think)

Bob Balzer wrote a pretty nifty paper called "Dataless Programming",

and shortly thereafter John Reynolds wrote an equally nifty paper

"Gedanken" (in 1970 I think) in which he showed that using the lamda

expressions the right way would allow data to be abstracted by

procedures.



The people who liked objects as non-data were smaller in number, and

included myself, Carl Hewitt, Dave Reed and a few others -- pretty

much all of this group were from the ARPA community and were involved

in one way or another with the design of ARPAnet->Internet in which

the basic unit of computation was a whole computer. But just to show

how stubbornly an idea can hang on, all through the seventies and

eighties, there were many people who tried to get by with "Remote

Procedure Call" instead of thinking about objects and messages. Sic

transit gloria mundi.



Cheers,



Alan



At 10:05 PM +0200 7/26/03, Stefan Ram wrote:

>On Wed, Jul 23, 2003 at 09:33:31AM -0800, Alan Kay wrote:

>>  OOP to me means only messaging, local retention and protection and

>>  hiding of state-process, and extreme late-binding of all things.

>

>   Hi Alan,

>

>   I just want to say "thank you" for your explanations

>   (including the parts not quoted above)!

>

>   "local retention" is a new notion to me in the context

>   of OOP, and I assume it refers to state-process and

>   means that an object is in possession of its state-process,

>   so that the state of an object is kept locally with the

>   object and not elsewhere.

>

>   I have published your reply on the web, but have removed

>   the E-Mail addresses and similar header lines for privacy.

>

>   Thanks again,

>

>   Stefan
