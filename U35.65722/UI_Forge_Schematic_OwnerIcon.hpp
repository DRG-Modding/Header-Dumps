#ifndef UE4SS_SDK_UI_Forge_Schematic_OwnerIcon_HPP
#define UE4SS_SDK_UI_Forge_Schematic_OwnerIcon_HPP

class UUI_Forge_Schematic_OwnerIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UImage* IconFiller;
    class UImage* IconOutline;
    class USizeBox* MaxSizer;
    class UCanvasPanel* RootCanvas;
    int32 MaxWidth;
    int32 MaxHeight;
    class USchematic* Schematic;

    void FromActorClass(TSubclassOf<class AActor> Actor, class UUpgradableItemComponent* CallFunc_GetComponentFromClass_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor, class UTexture2D* CallFunc_GetIconBG_ReturnValue, class UTexture2D* CallFunc_GetIconLine_ReturnValue, bool CallFunc_IsValid_ReturnValue);
    void FromItemID(class UItemID* ItemID, TSubclassOf<class AItem> CallFunc_GetItemClass_ReturnValue);
    void SetIconAndVisibility(class UTexture2D* Texture, FLinearColor InColor, FSlateColor K2Node_MakeStruct_SlateColor, bool CallFunc_IsValid_ReturnValue, bool CallFunc_SelectVisibility_IsVisible, bool CallFunc_SelectVisibility_VisibilityChanged, ESlateVisibility CallFunc_SelectVisibility_New_Visibility);
    void FromSchematic(class USchematic* InSchematic, class USchematicItem* Item, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USkinSchematicItem* K2Node_DynamicCast_AsSkin_Schematic_Item, bool K2Node_DynamicCast_bSuccess, class UInventoryList* CallFunc_GetHeroInventoryList_ReturnValue, class UOverclockShematicItem* K2Node_DynamicCast_AsOverclock_Shematic_Item, bool K2Node_DynamicCast_bSuccess_1, class USchematicItem* CallFunc_GetSchematicItem_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, TSubclassOf<class AActor> CallFunc_GetActorClass_ReturnValue);
    void SetMaxSize(int32 InWidth, int32 InHeight, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Conv_IntToFloat_ReturnValue_1);
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_UI_Forge_Schematic_OwnerIcon(int32 EntryPoint, class UObject* CallFunc_LoadAsset_Blocking_ReturnValue, class USchematic* K2Node_DynamicCast_AsSchematic, bool K2Node_DynamicCast_bSuccess, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1);
};

#endif
