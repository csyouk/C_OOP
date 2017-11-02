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
