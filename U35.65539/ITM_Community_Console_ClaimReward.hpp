#ifndef UE4SS_SDK_ITM_Community_Console_ClaimReward_HPP
#define UE4SS_SDK_ITM_Community_Console_ClaimReward_HPP

class UITM_Community_Console_ClaimReward_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* LogoAnimation;
    UImage* Image_Faction;
    USizeBox* SydicateLogoBox;
    UUI_ImageTinted_C* SyndicateLogo;
    UBorder* TextBackground;
    UBorder* TextBorder;
    UUI_ImageTinted_C* UI_ImageTinted_C_0;
    UUI_ImageTinted_C* UI_ImageTinted_C_2;
    UUI_ImageTinted_C* UI_ImageTinted_C_3;
    UUI_ImageTinted_C* UI_ImageTinted_C_4;
    TEnumAsByte<ENUM_MenuColors::Type> IconColor;
    FSlateBrush IconBrush;

    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ITM_Community_Console_ClaimReward(int32 EntryPoint, EFSDFaction Temp_byte_Variable, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UCommunityGoalFaction* Temp_object_Variable, UCommunityGoalFaction* Temp_object_Variable_1, UCommunityGoalFaction* Temp_object_Variable_2, UCommunityGoalFaction* Temp_object_Variable_3, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, EFSDFaction CallFunc_GetFaction_ReturnValue, UCommunityGoalFaction* K2Node_Select_Default, FSlateBrush K2Node_MakeStruct_SlateBrush);
}

#endif
