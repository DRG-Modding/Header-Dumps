#ifndef UE4SS_SDK_UI_RandomizeLoadoutWithUndo_HPP
#define UE4SS_SDK_UI_RandomizeLoadoutWithUndo_HPP

class UUI_RandomizeLoadoutWithUndo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UButton* Button_Redo;
    class UButton* Button_Undo;
    class UButton* ShuffleButton;
    class UUI_RandomizeIcon_C* UI_RandomizeIcon;
    TArray<FLoadoutCopy> Loadouts;
    bool RandomizeVanity;
    bool RandomizeWeapons;
    int32 CurrIndex;
    FUI_RandomizeLoadoutWithUndo_CLoadoutRefreshed LoadoutRefreshed;
    void LoadoutRefreshed();

    void GetCharacter(class APlayerCharacter*& AsPlayer Character);
    void SetHovered(bool IsHovered);
    void BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_Redo_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_RandomizeLoadoutWithUndo(int32 EntryPoint);
    void LoadoutRefreshed__DelegateSignature();
};

#endif
