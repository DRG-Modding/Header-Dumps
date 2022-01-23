#ifndef UE4SS_SDK_ITM_Craft_ItemIcon_HPP
#define UE4SS_SDK_ITM_Craft_ItemIcon_HPP

class UITM_Craft_ItemIcon_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    class UWidgetAnimation* IconReady;
    class UBorder* Border_Outside;
    class UBorder* BorderBG;
    class UImage* ICON_Item;
    class UImage* ICON_Padlock;
    class UImage* Shadow;
    class USizeBox* SizeBox_0;
    TScriptInterface<class ICraftable> Item;
    float Size;
    class UTextureRenderTarget2D* IconRenderTarget;

    void FreeRenderTarget();
    void SetIconTexture(class UObject* Object, class UTextureRenderTarget2D* K2Node_DynamicCast_AsTexture_Render_Target_2D, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void GetPlayerState(class AFSDPlayerState*& AsFSDPlayer State, class APlayerController* CallFunc_GetPlayerController_ReturnValue, class AFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void PreConstruct(bool IsDesignTime);
    void SetData(TScriptInterface<class ICraftable> Item, TSubclassOf<class APlayerCharacter> CharacterClass);
    void Construct();
    void ExecuteUbergraph_ITM_Craft_ItemIcon(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool Temp_bool_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_3, class UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_4, int32 CallFunc_GetPlayerRank_ReturnValue, TScriptInterface<class ICraftable> K2Node_CustomEvent_Item, TSubclassOf<class APlayerCharacter> K2Node_CustomEvent_CharacterClass, FLinearColor CallFunc_MenuColors_OutputColor_5, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, class UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_2, bool CallFunc_IsOwned_ReturnValue, class UVanityItem* K2Node_DynamicCast_AsVanity_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEquipped_ReturnValue, FLinearColor K2Node_Select_Default, int32 CallFunc_GetRequiredPlayerRank_ReturnValue, bool CallFunc_CanCraft_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, class UVanityItem* K2Node_DynamicCast_AsVanity_Item_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, FLinearColor K2Node_Select_Default_1, class UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FLinearColor K2Node_Select_Default_2, class UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue, class UTextureRenderTarget2D* CallFunc_GenerateVanityIcon_Async_icon, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
};

#endif
