#ifndef UE4SS_SDK_HUD_PlayerPerks_HPP
#define UE4SS_SDK_HUD_PlayerPerks_HPP

class UHUD_PlayerPerks_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UHorizontalBox* PerksBox;

    void SetCharacter(class APlayerCharacter* InPlayerCharacter);
    void Construct();
    void ExecuteUbergraph_HUD_PlayerPerks(int32 EntryPoint);
};

#endif
