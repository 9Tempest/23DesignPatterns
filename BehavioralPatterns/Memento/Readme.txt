Memento lets you save or restore the previous state of an object without revealing the
implementation of the detail.

Advantages:
    1.We can produce the snapshots of the object without violating encapsulates.
    2.We can maintain the originator's code(the object which wants to be taken snapshots) by letting
      caretaker to track the history of the snapshots.
Disadvantages:
    1.The caretaker has to track the life cycle of the originator. When the originator destroys, the 
      caretaker has to destroys the history of the snapshots.


Common Use:
    when you want to produce snapshots of some objects or make redo/undo execution.

Example: (my c++ code)
    In this program, the Memento in the GameRole records the snapshots of the player.
    While the CareTaker stores and restores the snapshots.
