#ifndef UE4SS_SDK_HUD_MapTool_HPP
#define UE4SS_SDK_HUD_MapTool_HPP

class UHUD_MapTool_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* MainTurnOn;
    class UWidgetAnimation* MapTurnOn;
    class UWidgetAnimation* RecordingDot;
    class UUI_AdvancedLabel_C* AlignLabel;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig;
    class UBasic_HUD_BracketWindowBig_C* Basic_HUD_BracketWindowBig_C_0;
    class UBorder* Border_0;
    class UImage* ImgrecordingDot;
    class UUI_AdvancedLabel_C* InputLabel;
    class UImage* MapView;
    class UTextBlock* TEXT_Header;
    class UTextBlock* TEXT_Header_1;
    class UTextBlock* TEXT_Header_2;
    class UTextBlock* TEXT_Recording;
    class UUI_AdvancedLabel_C* ZoomLabel;
    class APlayerCharacter* Character;
    bool MapVisible;
    bool ForwardPlayMode;

    void Construct();
    void OnToggleMapTool(bool Visible);
    void PreConstruct(bool IsDesignTime);
    void OnMainTurnOnFinished();
    void ExecuteUbergraph_HUD_MapTool(int32 EntryPoint, FExecuteUbergraph_HUD_MapToolK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class APawn* CallFunc_K2_GetPawn_ReturnValue, bool K2Node_CustomEvent_Visible, class APlayerCharacter* K2Node_DynamicCast_AsPlayer_Character, bool K2Node_DynamicCast_bSuccess, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FSlateColor K2Node_MakeStruct_SlateColor, FLinearColor CallFunc_MenuColors_OutputColor_1, FExecuteUbergraph_HUD_MapToolK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1);
};

#endif
