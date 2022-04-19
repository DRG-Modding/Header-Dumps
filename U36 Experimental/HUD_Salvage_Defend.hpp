#ifndef UE4SS_SDK_HUD_Salvage_Defend_HPP
#define UE4SS_SDK_HUD_Salvage_Defend_HPP

class UHUD_Salvage_Defend_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBigWindowBracketBig;
    class UProgressBar* DefenseProgress;
    class UHUD_DefaultLabel_C* Header;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_01;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_02;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_03;
    class UHUD_Salvage_Defend_PlayerSlot_C* PlayerSlot_04;
    class UHUD_DefaultLabel_C* Sucess_Done;
    class UVerticalBox* VerticalBox_Complete;
    class UVerticalBox* VerticalBox_InProgress;
    class AEVENT_DropPodDefense_Base_C* Event;
    FLinearColor ProgressColor;
    FText HeaderText;
    FLinearColor NoDefenderColor;
    FLinearColor HasDefenderColor;
    FText SuccesText;
    TArray<class UHUD_Salvage_Defend_PlayerSlot_C*> PlayerSlots;

    void UpdateDefenderBlocks(int32 DefenderCount);
    void Construct();
    void ProgressUpdated(float NewProgress);
    void PreConstruct(bool IsDesignTime);
    void DefendersUpdated(int32 DefenderCount);
    void success();
    void ExecuteUbergraph_HUD_Salvage_Defend(int32 EntryPoint);
};

#endif
