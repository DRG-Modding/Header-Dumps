#ifndef UE4SS_SDK_WND_Season_RewardClaimed_HPP
#define UE4SS_SDK_WND_Season_RewardClaimed_HPP

class UWND_Season_RewardClaimed_C : UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* Glow;
    UWidgetAnimation* Zoom;
    UWidgetAnimation* Intro;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    UBorder* Border_Glow;
    UButton* Button_0;
    UImage* Image_Background_Black;
    UImage* Image_Background_Smoke;
    UImage* Image_SelectedArrow;
    UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    UOverlay* Overlay_Skin;
    UTextBlock* TextBlock_Category;
    UTextBlock* TextBlock_Title;
    UTextBlock* TextBlock_Unlocked;
    UReward* Reward;

    void SetDataFromReward(UReward* Reward);
    void setup();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WND_Season_RewardClaimed(int32 EntryPoint, UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, USeasonTokenReward* K2Node_DynamicCast_AsSeason_Token_Reward, bool K2Node_DynamicCast_bSuccess_1, UReward* K2Node_CustomEvent_Reward, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UWindowManager* CallFunc_GetWindowManager_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, APawn* CallFunc_K2_GetPawn_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, APawn* CallFunc_K2_GetPawn_ReturnValue_1, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_3, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, APawn* CallFunc_K2_GetPawn_ReturnValue_2, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_4, FText CallFunc_GetRewardText_Title, FText CallFunc_GetRewardText_Category, FText CallFunc_GetRewardText_Description, bool CallFunc_GetRewardText_HasOptionalCharacterID, UPlayerCharacterID* CallFunc_GetRewardText_CharacterID);
}

#endif
