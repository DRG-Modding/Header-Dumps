#ifndef UE4SS_SDK_Itm_DLC_Entry_HPP
#define UE4SS_SDK_Itm_DLC_Entry_HPP

class UITM_DLC_Entry_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* AnimGlow;
    class UWidgetAnimation* AnimClick;
    class UWidgetAnimation* AnimFadeInMovie;
    class UWidgetAnimation* AnimHover;
    class UCanvasPanel* ButtonCanvas;
    class UWidgetSwitcher* ContentSwitcher;
    class UImage* DLC_Banner;
    class UButton* DLC_Button;
    class UBasic_Image_C* DLC_Movie;
    class USizeBox* DLC_SizeBox;
    class UOverlay* Glow_Overlay;
    class UOverlay* Owned_Overlay;
    class UShadowBG_C* ShadowBG;
    class UGameDLC* dlc;
    float Width;
    class UMediaPlayer* MediaPlayer;
    class UMediaTexture* MediaTexture;
    class UMediaSoundComponent* MediaSound;
    FITM_DLC_Entry_COnHoverBegin OnHoverBegin;
    void OnHoverBegin(class UITM_DLC_Entry_C* InEntry);
    FITM_DLC_Entry_COnHoverEnd OnHoverEnd;
    void OnHoverEnd(class UITM_DLC_Entry_C* InEntry);
    class UMediaSource* Movie;
    bool IsHovering;

    void Hover(bool InHover, bool& OutChanged, bool Temp_bool_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable, TEnumAsByte<EUMGSequencePlayMode::Type> Temp_byte_Variable_1, TEnumAsByte<EUMGSequencePlayMode::Type> K2Node_Select_Default, bool CallFunc_UpdateBool_ValueChanged, bool CallFunc_UpdateBool_OutValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
    void GetMediaPlayer(class UMediaPlayer*& MediaPlayer);
    void OnLoaded_842E9D344CABB7D6534CBDB978324582(class UObject* Loaded);
    void BndEvt__DLC_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__DLC_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__DLC_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ITM_DLC_Entry(int32 EntryPoint, FSlateColor K2Node_MakeStruct_SlateColor, FString CallFunc_Concat_StrStr_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, FString CallFunc_Concat_StrStr_ReturnValue_1, class UObject* Temp_object_Variable, class UMediaSource* K2Node_DynamicCast_AsMedia_Source, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_OpenStorePage_ReturnValue, bool CallFunc_Play_ReturnValue, FVector2D CallFunc_MakeVector2D_ReturnValue, bool CallFunc_Pause_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, bool CallFunc_SetLooping_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsHovered_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_BreakVector2D_X, float CallFunc_BreakVector2D_Y, bool CallFunc_IsUnLocked_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility, bool K2Node_Event_IsDesignTime, class UTexture2D* CallFunc_GetBanner_16_9_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, FExecuteUbergraph_ITM_DLC_EntryK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, bool CallFunc_OpenSource_ReturnValue, bool CallFunc_Hover_OutChanged, bool CallFunc_Hover_OutChanged_1, FGeometry K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_IsUnLocked_ReturnValue_1, bool CallFunc_SelectVisibility_IsVisible_1, bool CallFunc_SelectVisibility_VisibilityChanged_1, ESlateVisibility CallFunc_SelectVisibility_New_Visibility_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue);
    void OnHoverEnd__DelegateSignature(class UITM_DLC_Entry_C* InEntry);
    void OnHoverBegin__DelegateSignature(class UITM_DLC_Entry_C* InEntry);
};

#endif
