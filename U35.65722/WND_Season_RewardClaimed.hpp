#ifndef UE4SS_SDK_WND_Season_RewardClaimed_HPP
#define UE4SS_SDK_WND_Season_RewardClaimed_HPP

class UWND_Season_RewardClaimed_C : public UWindowWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* Glow;
    class UWidgetAnimation* Zoom;
    class UWidgetAnimation* Intro;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_1;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_2;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_3;
    class UBorder* Border_Glow;
    class UButton* Button_0;
    class UImage* Image_Background_Black;
    class UImage* Image_Background_Smoke;
    class UImage* Image_SelectedArrow;
    class UITM_Season_CharacterIcon_C* ITM_Season_CharacterIcon;
    class UITM_Season_RewardImageSingle_C* ITM_Season_RewardImageSingle;
    class UOverlay* Overlay_Skin;
    class UTextBlock* TextBlock_Category;
    class UTextBlock* TextBlock_Title;
    class UTextBlock* TextBlock_Unlocked;
    class UReward* Reward;

    void SetDataFromReward(class UReward* Reward);
    void setup();
    void BndEvt__Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WND_Season_RewardClaimed(int32 EntryPoint, class UVanityReward* K2Node_DynamicCast_AsVanity_Reward, bool K2Node_DynamicCast_bSuccess, class USeasonTokenReward* K2Node_DynamicCast_AsSeason_Token_Reward, bool K2Node_DynamicCast_bSuccess_1, class UReward* K2Node_CustomEvent_Reward, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UWindowManager* CallFunc_GetWindowManager_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_1, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_1, bool K2Node_DynamicCast_bSuccess_3, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue_2, class APawn* CallFunc_K2_GetPawn_ReturnValue_2, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character_2, bool K2Node_DynamicCast_bSuccess_4, FText CallFunc_GetRewardText_Title, FText CallFunc_GetRewardText_Category, FText CallFunc_GetRewardText_Description, bool CallFunc_GetRewardText_HasOptionalCharacterID, class UPlayerCharacterID* CallFunc_GetRewardText_CharacterID);
};

#endif
