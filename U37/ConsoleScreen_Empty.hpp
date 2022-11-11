#ifndef UE4SS_SDK_ConsoleScreen_Empty_HPP
#define UE4SS_SDK_ConsoleScreen_Empty_HPP

class UConsoleScreen_Empty_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UNamedSlot* PutStuffHere;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ConsoleScreen_Empty(int32 EntryPoint);
};

#endif
