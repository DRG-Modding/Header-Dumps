#ifndef UE4SS_SDK_Console_Plague_VialDispenserScreen_HPP
#define UE4SS_SDK_Console_Plague_VialDispenserScreen_HPP

class UConsole_Plague_VialDispenserScreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* Image_41;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_Console_Plague_VialDispenserScreen(int32 EntryPoint);
};

#endif
