#ifndef UE4SS_SDK_HUD_Itembar_HPP
#define UE4SS_SDK_HUD_Itembar_HPP

class UHUD_Itembar_C : UItemsBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* FadeOut;
    UBorder* FadeBorder;
    UHorizontalBox* IconsParent;
    URetainerBox* RetainerBox_0;
    bool Fading;

    void OnItemAdded(UItemsBarIcon* ItemIcon);
    void OnClear();
    void Construct();
    void OnItemEquipped(UItemsBarIcon* ItemIcon);
    void Show();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void OnItemClicked();
    void PreConstruct(bool IsDesignTime);
    void FadeOutFinished();
    void ExecuteUbergraph_HUD_Itembar(int32 EntryPoint, InputSourceChangedSignature__DelegateSignature K2Node_CreateDelegate_OutputDelegate, UItemsBarIcon* K2Node_Event_ItemIcon_1, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, UItemsBarIcon* K2Node_Event_ItemIcon, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, WidgetAnimationDynamicEvent__DelegateSignature K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, UHUD_Itembar_Icon_C* CallFunc_Create_ReturnValue, UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
}

#endif
