#ifndef UE4SS_SDK_ConsoleScreen_Empty_HPP
#define UE4SS_SDK_ConsoleScreen_Empty_HPP

class UConsoleScreen_Empty_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UNamedSlot* PutStuffHere;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Empty(int32 EntryPoint, bool K2Node_Event_IsDesignTime);
}

#endif