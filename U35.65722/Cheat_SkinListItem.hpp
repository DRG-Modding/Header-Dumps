#ifndef UE4SS_SDK_Cheat_SkinListItem_HPP
#define UE4SS_SDK_Cheat_SkinListItem_HPP

class UCheat_SkinListItem_C : public UFSDUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UTextBlock* NameOfSkin;
    class UButton* SkinActivationButton;
    class UImage* SkinImage;
    FCheat_SkinListItem_COnSkinEquipped OnSkinEquipped;
    void OnSkinEquipped(EItemCategory Category);
    class UItemSkin* ItemSkin;
    EItemCategory ItemCategory;
    bool IsEquipped;

    void BndEvt__SkinActivationButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Setup Skin Selection Widget();
    void ExecuteUbergraph_Cheat_SkinListItem(int32 EntryPoint, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, FSlateColor K2Node_MakeStruct_SlateColor, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue, class UItemID* CallFunc_GetItemID_ReturnValue, class UItemSkin* CallFunc_GetEquippedSkin_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, FSlateBrush K2Node_MakeStruct_SlateBrush, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue_1, TSubclassOf<class APlayerCharacter> CallFunc_GetObjectClass_ReturnValue_1, class AFSDPlayerState* CallFunc_GetFSDPlayerState_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, TSubclassOf<class AActor> CallFunc_GetEquippedItem_ReturnValue_1, class UItemID* CallFunc_GetItemID_ReturnValue_1);
    void OnSkinEquipped__DelegateSignature(EItemCategory Category);
};

#endif
