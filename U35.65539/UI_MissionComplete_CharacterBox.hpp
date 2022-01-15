#ifndef UE4SS_SDK_UI_MissionComplete_CharacterBox_HPP
#define UE4SS_SDK_UI_MissionComplete_CharacterBox_HPP

class UUI_MissionComplete_CharacterBox_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* AnimMoveIn;
    UBorder* Border_0;
    UBorder* Border_1;
    UButton* BTN_Gamercard;
    UTextBlock* Data_CharacterClass;
    UTextBlock* Data_Kills;
    UTextBlock* Data_Mining;
    UTextBlock* DATA_PlayerName;
    UTextBlock* Data_Revives;
    UImage* Icon_Kills;
    UImage* Icon_Mining;
    UImage* Icon_Revives;
    UImage* Image_Deaths;
    UTextBlock* TextBlock_Deaths;
    UUI_MissionComplete_RankLevel_C* UI_MissionComplete_RankLevel;
    USizeBox* WindowSizeBox;
    AFSDPlayerState* PlayerState;
    UPlayerStatsComponent* PlayerStats;
    FCharacterProgress CharacterProgress;
    FUI_MissionComplete_CharacterBox_COnCountingFinished OnCountingFinished;
    void OnCountingFinished();
    FUI_MissionComplete_CharacterBox_COnMoveInFinished OnMoveInFinished;
    void OnMoveInFinished(UUI_MissionComplete_CharacterBox_C* Widget);

    void PreConstruct(bool IsDesignTime);
    void Add Stat(FText Description, int32 Amount);
    void BeginCounting();
    void BndEvt__UI_MissionComplete_RankLevel_K2Node_ComponentBoundEvent_0_CounterAnimFinished__DelegateSignature();
    void BeginMoveIn(float InDelay, float InDuration);
    void MoveInFinished();
    void BndEvt__Button_52_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Init(UFSDPlayerState* State);
    void Construct();
    void ExecuteUbergraph_UI_MissionComplete_CharacterBox(int32 EntryPoint, ESlateVisibility Temp_byte_Variable, ESlateVisibility Temp_byte_Variable_1, ESlateVisibility Temp_byte_Variable_2, ESlateVisibility Temp_byte_Variable_3, ESlateVisibility Temp_byte_Variable_4, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FSlateColor K2Node_MakeStruct_SlateColor_1, EFSDTargetPlatform Temp_byte_Variable_5, FText K2Node_CustomEvent_Description, int32 K2Node_CustomEvent_Amount, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_2, FLinearColor CallFunc_MenuColorsAndOpacity_OutputColor, float K2Node_CustomEvent_InDelay, float K2Node_CustomEvent_InDuration, float CallFunc_Divide_FloatFloat_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UITM_MissionComplete_Resource_C* CallFunc_Create_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, UFSDPlayerController* K2Node_DynamicCast_AsFSDPlayer_Controller, bool K2Node_DynamicCast_bSuccess, UFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, ESlateVisibility K2Node_Select_Default, FString CallFunc_GetPlayerName_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, FText CallFunc_TextToUpper_ReturnValue, TSubclassOf<UPlayerCharacter> CallFunc_GetCharacterClass_ReturnValue, FText CallFunc_GetHeroName_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, UFSDPlayerState* K2Node_CustomEvent_State, FText CallFunc_Conv_IntToText_ReturnValue, FText CallFunc_Conv_FloatToText_ReturnValue, FText CallFunc_Conv_IntToText_ReturnValue_1, FText CallFunc_Conv_IntToText_ReturnValue_2);
    void OnMoveInFinished__DelegateSignature(UUI_MissionComplete_CharacterBox_C* Widget);
    void OnCountingFinished__DelegateSignature();
}

#endif
