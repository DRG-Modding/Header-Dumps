#ifndef UE4SS_SDK_ITM_ResetFaction_ConsoleScreenV1_HPP
#define UE4SS_SDK_ITM_ResetFaction_ConsoleScreenV1_HPP

class UITM_ResetFaction_ConsoleScreenV1_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UBasic_Menu_MinimalWindow_C* Basic_Menu_MinimalWindow;
    UTextBlock* CostTextBlock;
    USizeBox* CurrentSizebox;
    UImage* FactionLogo;
    UImage* Image_429;
    UUI_GradientMasked_Image_C* UI_GradientMasked_Image;
    UUI_ImageTinted_C* UI_ImageTinted;
    UCommunityGoalFaction* CurrentFaction;
    int32 Cost;
    FITM_ResetFaction_ConsoleScreenV1_CCheckState CheckState;
    void CheckState();
    TArray<UCommunityGoalFaction*> FactionArray;

    int32 CurrentFactionID(int32 CallFunc_Conv_ByteToInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue);
    void PreConstruct(bool IsDesignTime);
    void Set Faction(UCommunityGoalFaction* Faction);
    void ExecuteUbergraph_ITM_ResetFaction_ConsoleScreenV1(int32 EntryPoint, FText CallFunc_Conv_IntToText_ReturnValue, bool K2Node_Event_IsDesignTime, UCommunityGoalFaction* K2Node_CustomEvent_Faction, FSlateBrush K2Node_MakeStruct_SlateBrush);
    void CheckState__DelegateSignature();
}

#endif
