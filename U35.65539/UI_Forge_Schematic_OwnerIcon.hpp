#ifndef UE4SS_SDK_UI_Forge_Schematic_OwnerIcon_HPP
#define UE4SS_SDK_UI_Forge_Schematic_OwnerIcon_HPP

class UUI_Forge_Schematic_OwnerIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* IconFiller;
    UImage* IconOutline;
    USizeBox* MaxSizer;
    UCanvasPanel* RootCanvas;
    int32 MaxWidth;
    int32 MaxHeight;
    USchematic* Schematic;

    void FromActorClass(TSubclassOf<AActor> Actor, UUpgradableItemComponent* CallFunc_GetComponentFromClass_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, UTexture2D* CallFunc_GetIconBG_ReturnValue, UTexture2D* CallFunc_GetIconLine_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void FromItemID(UItemID* ItemID, TSubclassOf<AItem> CallFunc_GetItemClass_ReturnValue);
    void SetIconAndVisibility(UTexture2D* Texture, FLinearColor InColor, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void FromSchematic(USchematic* InSchematic, USchematicItem* Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, USkinSchematicItem* K2Node_DynamicCast_AsSkin_Schematic_Item, bool K2Node_DynamicCast_bSuccess, UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, UOverclockShematicItem* K2Node_DynamicCast_AsOverclock_Shematic_Item, bool K2Node_DynamicCast_bSuccess_1, USchematicItem* CallFunc_GetSchematicItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TSubclassOf<AActor> CallFunc_GetActorClass_ReturnValue);
    void SetMaxSize(int32 InWidth, int32 InHeight, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int32 EntryPoint, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, USchematic* K2Node_DynamicCast_AsSchematic, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
}

#endif
