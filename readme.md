<table align="center" style="border: 1px solid #30363d; border-collapse: collapse; background-color: #0d1117; width: 100%;">
  <tr>
    <td align="center" width="40%" style="padding: 20px; border-right: 1px solid #30363d; background: #0d1117; vertical-align: middle;">
      <img src="furina2.gif" width="220" alt="Coding Chibi" />
    </td>
    <td width="60%" style="padding: 25px; font-family: 'Courier New', monospace; background: #0d1117; color: #c9d1d9; vertical-align: middle;">
      <h1 style="margin-top: 0; color: #ffffff;">Hi there, I'm ZEUS</h1>
      <p style="font-size: 1.1em; line-height: 1.5;">
        A tech enthusiast here I am presenting my project <strong>THE RPS SHOWDOWN</strong> — a fast-paced rock-paper-scissors simulator written natively in C.
      </p>
    </td>
  </tr>
</table>

<br />
<hr style="border-color: #30363d;" />

## Project Architecture: THE RPS SHOWDOWN

THE RPS SHOWDOWN uses a highly optimized execution path to process user inputs, generate randomized machine decisions, and evaluate win/loss states cleanly without bulky nested conditions.

### Core Concepts Implemented

* **Dynamic Time-Based Seeding:** Utilizes `srand(time(0))` to seed the pseudo-random engine, ensuring the computer picks an unpredictable variable choice (`rand() % 3`) every run.
* **Input Validation Guard:** Integrates an error-handling block within the `scanf` stream state to immediately terminate execution if the user enters out-of-bounds numbers or non-integer characters.
* **Mathematical Vector Resolution:** Avoids a massive chain of nested `if-else` loops by implementing a smart circular matrix shift equation to determine the match result instantly:
  $$\text{Result} = (\text{Player} - \text{Computer} + 3) \pmod 3$$
  * *Result = 0:* Draw State
  * *Result = 1:* Player Victory Condition
  * *Result = 2:* Computer Victory Condition

<br />
<hr style="border-color: #30363d;" />

<div align="center" style="margin-top: 40px; margin-bottom: 20px;">
  <img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=22&duration=3500&pause=1000&color=58a6ff&background=0D111700&center=true&vCenter=true&width=500&lines=Thank+you+for+your+interaction.+%5B+%E2%96%88+%5D;Thank+you+for+your+interaction.+%5B+%5D" alt="Typing Animation" />
</div>