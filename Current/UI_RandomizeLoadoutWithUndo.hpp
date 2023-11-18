#ifndef UE4SS_SDK_UI_RandomizeLoadoutWithUndo_HPP
#define UE4SS_SDK_UI_RandomizeLoadoutWithUndo_HPP

class UUI_RandomizeLoadoutWithUndo_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* OnHoverV2;
    class UWidgetAnimation* OnHover;
    class UBorder* Background;
    class UButton* Button_Dice;
    class UButton* Button_HoverCheck;
    class UButton* Button_Randomize;
    class UButton* Button_Undo;
    class UBorder* FrameBorder;
    class UImage* Image_Dice;
    class UBorder* SelectionBorder;
    class UUI_RandomizeIcon_C* UI_RandomizeIcon;
    class UUI_UndoIcon_C* UI_UndoIcon;
    class UVerticalBox* VerticalBox_Buttons;
    TArray<FLoadoutCopy> Loadouts;
    bool RandomizeVanity;
    bool RandomizeWeapons;
    bool RandomizePickaxe;
    int32 CurrIndex;
    FUI_RandomizeLoadoutWithUndo_CLoadoutRefreshed LoadoutRefreshed;
    void LoadoutRefreshed();
    bool IsButtonsOut;
    class UPlayerCharacterID* characterID;

    void GetCharacterID(class UPlayerCharacterID*& characterID);
    void GetCharacter(class APlayerCharacter*& AsPlayer Character);
    void BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_ShuffleButton_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void SetHovered(bool IsHovered);
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_5_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_ShowRandomize_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_HoverCheck_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void CheckHide();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__UI_RandomizeLoadoutWithUndo_Button_Undo_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void PreConstruct(bool IsDesignTime);
    void Clear();
    void Construct();
    void OnHoverAnimFinished();
    void SetCharacter(class UPlayerCharacterID* characterID);
    void ExecuteUbergraph_UI_RandomizeLoadoutWithUndo(int32 EntryPoint);
    void LoadoutRefreshed__DelegateSignature();
};

#endif
