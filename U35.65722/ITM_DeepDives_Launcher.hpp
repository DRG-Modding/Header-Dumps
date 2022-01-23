#ifndef UE4SS_SDK_ITM_DeepDives_Launcher_HPP
#define UE4SS_SDK_ITM_DeepDives_Launcher_HPP

class UITM_DeepDives_Launcher_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* BackgroundButton;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar;
    class UBasic_Menu_ColorBar_C* Basic_Menu_ColorBar_106;
    class UBasic_Label_C* Data_CodeName;
    class UTextBlock* DATA_Quote;
    class UBasic_Label_C* Data_Region;
    class UImage* Image_103;
    class UImage* Image_210;
    class UImage* Image_227;
    class UImage* Image_465;
    class UImage* Image_612;
    class UITM_DeepDiveHeader_C* ITM_DeepDiveHeader;
    class UITM_DeepDives_LaunchButton_C* ITM_DeepDives_LaunchButton;
    class UITM_DeepDives_RejoinButton_C* ITM_DeepDives_RejoinButton;
    class UITM_Gear_Bar_C* ITM_Gear_Bar;
    class UImage* MovieCanvas;
    class UOverlay* PersonalBestOverlay;
    class UBasic_Label_C* PersonalBestText;
    class UShadowBG_C* ShadowBG;
    class UShadowBG_C* ShadowBG_216;
    class UShadowBG_C* ShadowBG_C_0;
    class UShadowBG_C* ShadowBG_C_1;
    class UImage* StaticOverlay;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    class UMediaSource* Movie;
    bool ShowHardDeepDive;
    bool IsHovering;
    FITM_DeepDives_Launcher_COnStartMission OnStartMission;
    void OnStartMission(class UDeepDive* DeepDive);
    FITM_DeepDives_Launcher_COnJoinMission OnJoinMission;
    void OnJoinMission(bool EliteDeepDive);
    FITM_DeepDives_Launcher_COnRefresh OnRefresh;
    void OnRefresh(bool success);
    class UAudioComponent* HoverAudioComponent;

    void SetBestTime(int32 BestTime, FText Temp_text_Variable, bool Temp_bool_Variable, bool CallFunc_Greater_IntInt_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue, FText CallFunc_GetTimeText_Text, FText K2Node_Select_Default, class UDeepDive* CallFunc_GetDeepDive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void SetPersonalBest(int32 TotalSeconds, bool CallFunc_Greater_IntInt_ReturnValue, FString CallFunc_GetShortTimeString_ReturnValue, FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void UpdateBiomeQuote(class UDeepDive* InDeepDive, FRandomStream Random, FText Quote, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, FText CallFunc_TryPickRandomText_OutResult, bool CallFunc_TryPickRandomText_ReturnValue, bool CallFunc_RandomBoolFromStream_ReturnValue, class UGameData* CallFunc_GetFSDGameData_ReturnValue, FText CallFunc_TryPickRandomText_OutResult_1, bool CallFunc_TryPickRandomText_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, class UGeneratedMission* CallFunc_Array_Get_Item);
    void SetButtonsEnabled(bool bInIsEnabled, FText DisabledExplanation, FText CallFunc_TextToUpper_ReturnValue, FText CallFunc_TextToUpper_ReturnValue_1, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget_1, bool CallFunc_TextIsEmpty_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue);
    void Refresh(class UDeepDive* DeepDive, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class UMediaSource* K2Node_DynamicCast_AsMedia_Source, bool K2Node_DynamicCast_bSuccess, class UDeepDive* CallFunc_GetDeepDive_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    class UDeepDive* GetDeepDive(bool Temp_bool_Variable, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class UDeepDive* K2Node_Select_Default);
    void SetMovie(class UMediaSource* InMovie, FMediaPlayerOptions K2Node_MakeStruct_MediaPlayerOptions, bool CallFunc_OpenSourceWithOptions_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__LaunchButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__BackgroundButton_K2Node_ComponentBoundEvent_3_OnButtonHoverEvent__DelegateSignature();
    void SetHovered(bool InHovered);
    void BndEvt__MediaPlayer_K2Node_ComponentBoundEvent_1_OnMediaPlayerMediaOpened__DelegateSignature(FString OpenedUrl);
    void BndEvt__ITM_DeepDives_LaunchButton_K2Node_ComponentBoundEvent_5_OnClicked__DelegateSignature();
    void BndEvt__ITM_DeepDives_RejoinButton_K2Node_ComponentBoundEvent_6_OnClicked__DelegateSignature();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_ITM_DeepDives_Launcher(int32 EntryPoint, bool Temp_bool_Variable, class UMediaTexture* Temp_object_Variable, class UMediaTexture* Temp_object_Variable_1, bool Temp_bool_Variable_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsReady_ReturnValue, FLinearColor Temp_struct_Variable, FLinearColor Temp_struct_Variable_1, bool Temp_bool_Variable_2, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable, TEnumAsByte<ENUM_MenuColors::Type> Temp_byte_Variable_1, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool Temp_bool_Has_Been_Initd_Variable, bool K2Node_Event_IsDesignTime, FSlateBrush K2Node_MakeStruct_SlateBrush, class UMediaTexture* K2Node_Select_Default, bool K2Node_CustomEvent_InHovered, class UMediaPlayer* Temp_object_Variable_2, bool CallFunc_Pause_ReturnValue, bool CallFunc_Play_ReturnValue, FString K2Node_ComponentBoundEvent_OpenedUrl, TEnumAsByte<ENUM_MenuColors::Type> K2Node_Select_Default_1, bool CallFunc_Play_ReturnValue_1, bool CallFunc_Pause_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Variable_3, class UMediaPlayer* Temp_object_Variable_3, class UMediaPlayer* K2Node_Select_Default_2, FLinearColor K2Node_Select_Default_3, class UDeepDive* CallFunc_GetDeepDive_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FExecuteUbergraph_ITM_DeepDives_LauncherK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UBasic_ToolTip_C* CallFunc_CreateBasicToolTip_ToolTipWidget, bool CallFunc_GetHasEverCompletedDeepDive_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UAudioComponent* CallFunc_SpawnSound2D_ReturnValue, FFocusEvent K2Node_Event_InFocusEvent);
    void OnRefresh__DelegateSignature(bool success);
    void OnJoinMission__DelegateSignature(bool EliteDeepDive);
    void OnStartMission__DelegateSignature(class UDeepDive* DeepDive);
};

#endif
