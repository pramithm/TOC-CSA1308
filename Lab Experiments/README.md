# Theory of Computation (TOC) Lab Experiments Manual (Regulation 2021 - CSA13)
### Saveetha School of Engineering - Computer Science and Engineering Programme

This repository contains complete, runnable C implementations for all **43 Experiments** outlined in the CSA13 Theory of Computation Lab Manual.

---

## 📁 List of Experiments & Source Files

| Exp No. | Experiment Title / Question Description | Language | Source File |
| :--- | :--- | :---: | :--- |
| **01** | Deterministic Finite Automata (DFA) starting with 'a' and ending with 'b' | C | [`exp01_dfa.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp01_dfa.c) |
| **02** | Non-Deterministic Finite Automata (NFA) starting & ending with same symbol | C | [`exp02_nfa.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp02_nfa.c) |
| **03** | Finding $\varepsilon$-Closure for NFA with $\varepsilon$-moves | C | [`exp03_epsilon_closure.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp03_epsilon_closure.c) |
| **04** | Check String Belonging to Grammar $S \to 0A1, A \to 0A \mid 1A \mid \varepsilon$ | C | [`exp04_grammar_0A1.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp04_grammar_0A1.c) |
| **05** | Check String Belonging to Grammar $S \to 0S0 \mid 1S1 \mid 0 \mid 1 \mid \varepsilon$ (Palindrome) | C | [`exp05_grammar_palindrome.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp05_grammar_palindrome.c) |
| **06** | Check String Belonging to Grammar $S \to 0S0 \mid A, A \to 1A \mid \varepsilon$ ($0^n 1^m 0^n$) | C | [`exp06_grammar_0n1m0n.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp06_grammar_0n1m0n.c) |
| **07** | Check String Belonging to Grammar $S \to 0S1 \mid \varepsilon$ ($0^n 1^n$) | C | [`exp07_grammar_0n1n.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp07_grammar_0n1n.c) |
| **08** | Check String Belonging to Grammar $S \to A101A, A \to 0A \mid 1A \mid \varepsilon$ (Substring 101) | C | [`exp08_grammar_101_substring.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp08_grammar_101_substring.c) |
| **09** | DFA to accept input strings `"a"`, `"ac"`, and `"bac"` | C | [`exp09_dfa_a_ac_bac.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp09_dfa_a_ac_bac.c) |
| **10** | PDA accepting language $N_a(w) = N_b(w)$ | C | [`exp10_pda_equal_a_b.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp10_pda_equal_a_b.c) |
| **11** | PDA accepting input string $a^n b^{2n}$ | C | [`exp11_pda_an_b2n.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp11_pda_an_b2n.c) |
| **12** | Turing Machine (TM) accepting input string $a^n b^n$ | C | [`exp12_tm_an_bn.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp12_tm_an_bn.c) |
| **13** | Turing Machine (TM) accepting input string $a^n b^{2n}$ | C | [`exp13_tm_an_b2n.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp13_tm_an_b2n.c) |
| **14** | Turing Machine (TM) accepting Palindrome `"ababa"` | C | [`exp14_tm_palindrome_ababa.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp14_tm_palindrome_ababa.c) |
| **15** | Turing Machine (TM) accepting input string $w w$ | C | [`exp15_tm_ww.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp15_tm_ww.c) |
| **16** | Turing Machine (TM) to perform Unary Addition (`aa + aaa = aaaaa`) | C | [`exp16_tm_addition.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp16_tm_addition.c) |
| **17** | Turing Machine (TM) to perform Unary Subtraction (`aaa - aa = a`) | C | [`exp17_tm_subtraction.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp17_tm_subtraction.c) |
| **18** | DFA accepting even number of 'a's | C | [`exp18_dfa_even_a.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp18_dfa_even_a.c) |
| **19** | DFA accepting odd number of 'a's | C | [`exp19_dfa_odd_a.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp19_dfa_odd_a.c) |
| **20** | DFA accepting strings ending with `"ab"` over $\{a,b\}$ | C | [`exp20_dfa_ends_ab.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp20_dfa_ends_ab.c) |
| **21** | DFA accepting strings having `"ab"` as substring over $\{a,b\}$ | C | [`exp21_dfa_ab_substring.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp21_dfa_ab_substring.c) |
| **22** | DFA accepting strings starting with 'a' or 'b' | C | [`exp22_dfa_starts_a_or_b.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp22_dfa_starts_a_or_b.c) |
| **23** | Turing Machine (TM) accepting Palindrome `"bbabb"` | C | [`exp23_tm_palindrome_bbabb.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp23_tm_palindrome_bbabb.c) |
| **24** | Turing Machine (TM) accepting input string $w c w$ | C | [`exp24_tm_wcw.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp24_tm_wcw.c) |
| **25** | DFA accepting even number of 'a's and odd number of 'b's | C | [`exp25_dfa_even_a_odd_b.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp25_dfa_even_a_odd_b.c) |
| **26** | DFA accepting input strings `"bc"`, `"c"`, and `"bcaaa"` | C | [`exp26_dfa_bc_c_bcaaa.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp26_dfa_bc_c_bcaaa.c) |
| **27** | NFA accepting any number of 'a's over $\{a,b\}$ | C | [`exp27_nfa_any_a.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp27_nfa_any_a.c) |
| **28** | PDA accepting input string $a^n b^n$ | C | [`exp28_pda_an_bn.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp28_pda_an_bn.c) |
| **29** | TM performing string comparison for $w = \{\text{aba aba}\}$ | C | [`exp29_tm_string_compare.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp29_tm_string_compare.c) |
| **30** | DFA accepting strings having `"abc"` as substring over $\{a,b,c\}$ | C | [`exp30_dfa_abc_substring.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp30_dfa_abc_substring.c) |
| **31** | DFA accepting even number of 'c's over $\{a,b,c\}$ | C | [`exp31_dfa_even_c.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp31_dfa_even_c.c) |
| **32** | DFA accepting strings in which 'a's always appear tripled | C | [`exp32_dfa_tripled_a.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp32_dfa_tripled_a.c) |
| **33** | NFA accepting string starting with 'a' and ending with 'b' | C | [`exp33_nfa_start_a_end_b.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp33_nfa_start_a_end_b.c) |
| **34** | NFA accepting string starting and ending with different symbols | C | [`exp34_nfa_diff_start_end.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp34_nfa_diff_start_end.c) |
| **35** | DFA for language $L = \{w \mid N_a(w) - N_b(w) \le 2\}$ | C | [`exp35_dfa_na_minus_nb_le2.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp35_dfa_na_minus_nb_le2.c) |
| **36** | DFA accepting string ending with `"abc"` over $\{a,b,c\}$ | C | [`exp36_dfa_ends_abc.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp36_dfa_ends_abc.c) |
| **37** | NFA accepting any number of 'b's over $\{a,b\}$ | C | [`exp37_nfa_any_b.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp37_nfa_any_b.c) |
| **38** | Case Study: ATM System Finite State Machine (FSM) | C | [`exp38_atm_fsm.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp38_atm_fsm.c) |
| **39** | Pattern Searching using Finite Automata Algorithm | C | [`exp39_pattern_searching.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp39_pattern_searching.c) |
| **40** | Vending Machine Finite State Machine | C | [`exp40_vending_machine.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp40_vending_machine.c) |
| **41** | Natural Language Processing (NLP) Date & Lexicon Automata | C | [`exp41_nlp_automata.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp41_nlp_automata.c) |
| **42** | Turing Machine Unary Multiplication $a^m \times a^n = a^{m \times n}$ | C | [`exp42_tm_multiplication.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp42_tm_multiplication.c) |
| **43** | Finite Automata checking if binary string is a multiple of 3 | C | [`exp43_fa_binary_div3.c`](file:///c:/Users/sanat/OneDrive/Desktop/TOC_LabExperiments/exp43_fa_binary_div3.c) |

---

## 🛠️ How to Compile & Run

Any standard C compiler (such as `gcc` or `clang`) can be used to compile these programs.

### Compiling a Single Experiment:
```bash
gcc -Wall -Wextra exp01_dfa.c -o exp01_dfa.exe
./exp01_dfa.exe
```

### Compiling All Experiments:
On Windows (PowerShell):
```powershell
Get-ChildItem *.c | ForEach-Object { gcc $_.Name -o ($_.BaseName + ".exe") }
```
On Linux / macOS:
```bash
for file in *.c; do gcc "$file" -o "${file%.c}.exe"; done
```
