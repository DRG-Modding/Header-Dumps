#ifndef UE4SS_SDK_HUD_MapTool_HPP
#define UE4SS_SDK_HUD_MapTool_HPP

class UHUD_MapTool_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* MainTurnOn;
    UWidgetAnimation* MapTurnOn;
    UWidgetAnimation* RecordingDot;
    UUI_AdvancedLabel_C* AlignLabel;
    UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig;
    UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig_C_0;
    UBorder* Border_0;
    UImage* ImgrecordingDot;
    UUI_AdvancedLabel_C* InputLabel;
    UImage* MapView;
    UTextBlock* TEXT_Header;
    UTextBlock* TEXT_Header_1;
    UTextBlock* TEXT_Header_2;
    UTextBlock* TEXT_Recording;
    UUI_AdvancedLabel_C* ZoomLabel;
    APlayerCharacter* Character;
    bool MapVisible;
    bool ForwardPlayMode;

    void Construct();
    void OnToggleMapTool(bool Visible);
    void PreConstruct(bool IsDesignTime);
    void OnMainTurnOnFinished();
    void ExecuteUbergraph_HUD_MapTool(int32 EntryPoint, ToggleMapToolSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, APawn* CallFunc_K2_GetPawn_ReturnValue, bool K2Node_CustomEvent_Visible, UPlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1);
}

#endif
