#ifndef UE4SS_SDK_HUD_Itembar_HPP
#define UE4SS_SDK_HUD_Itembar_HPP

class UHUD_Itembar_C : public UItemsBar
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* FadeOut;
    class UBorder* FadeBorder;
    class UHorizontalBox* IconsParent;
    class URetainerBox* RetainerBox_0;
    bool Fading;

    void OnItemAdded(class UItemsBarIcon* ItemIcon);
    void OnClear();
    void Construct();
    void OnItemEquipped(class UItemsBarIcon* ItemIcon);
    void Show();
    void OnInputSourceChanged(EFSDInputSource InputSource);
    void OnItemClicked();
    void PreConstruct(bool IsDesignTime);
    void FadeOutFinished();
    void ExecuteUbergraph_HUD_Itembar(int32 EntryPoint, FExecuteUbergraph_HUD_ItembarK2Node_CreateDelegate_OutputDelegate K2Node_CreateDelegate_OutputDelegate, class UItemsBarIcon* K2Node_Event_ItemIcon_1, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue, class UItemsBarIcon* K2Node_Event_ItemIcon, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue, EFSDInputSource K2Node_CustomEvent_InputSource, EFSDInputSource CallFunc_GetInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, FExecuteUbergraph_HUD_ItembarK2Node_CreateDelegate_OutputDelegate_1 K2Node_CreateDelegate_OutputDelegate_1, bool K2Node_Event_IsDesignTime, int32 Temp_int_Variable, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class APlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UHUD_Itembar_Icon_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UFSDGameUserSettings* CallFunc_FSDGameUserSettings_ReturnValue_1, EFSDInputSource CallFunc_GetCurrentInputSource_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1);
};

#endif
