#ifndef UE4SS_SDK_ITEM_MoviePanel_HPP
#define UE4SS_SDK_ITEM_MoviePanel_HPP

class UITEM_MoviePanel_C : UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* MoviePanel;
    bool PlayWhenReady;
    UMediaPlayer* MediaPlayer;
    bool Init;
    bool InitStarted;
    bool Built;
    UMediaSource* MediaSource;
    int32 ReadyTries;
    UMediaTexture* MediaTexture;
    FSlateBrush MediaBrush;

    void CheckPlayWhenReady();
    void ReadyToPlay(bool& ready, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
    bool Pause(bool CallFunc_Pause_ReturnValue);
    void Play(bool CallFunc_ReadyToPlay_Ready, bool CallFunc_Play_ReturnValue);
    void Collapse();
    void SetSourceAndPlay(UMediaSource* VideoMediaSource, EFSDTargetPlatform Temp_byte_Variable, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool Temp_bool_Variable_4, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool K2Node_Select_Default, bool CallFunc_Play_ReturnValue);
    void Construct();
    void InitPlayer();
    void OnVisibilityChanged_Event_0(UUserWidget* Widget, bool IsVisible);
    void ExecuteUbergraph_ITEM_MoviePanel(int32 EntryPoint, int32 Temp_int_Variable, VisibilityChangedDelegate__DelegateSignature K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, EFSDTargetPlatform Temp_byte_Variable, EFSDTargetPlatform CallFunc_FSDTargetPlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_Variable_1, bool CallFunc_IsReady_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_2, bool Temp_bool_Variable_3, bool CallFunc_OpenSource_ReturnValue, UUserWidget* K2Node_CustomEvent_Widget, bool K2Node_CustomEvent_isVisible, bool Temp_bool_Variable_4, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_Select_Default, int32 CallFunc_Add_IntInt_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush);
}

#endif
