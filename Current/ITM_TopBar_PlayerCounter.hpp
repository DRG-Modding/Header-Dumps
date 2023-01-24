#ifndef UE4SS_SDK_ITM_TopBar_PlayerCounter_HPP
#define UE4SS_SDK_ITM_TopBar_PlayerCounter_HPP

class UITM_TopBar_PlayerCounter_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* ClassIcon;
    int32 Index;

    void GetPlayerClass(class UPlayerCharacterID*& OutPlayerCharacter);
    void Refresh();
    void Construct();
    void ExecuteUbergraph_ITM_TopBar_PlayerCounter(int32 EntryPoint);
};

#endif
