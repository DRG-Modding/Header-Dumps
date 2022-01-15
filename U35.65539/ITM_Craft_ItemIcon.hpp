#ifndef UE4SS_SDK_ITM_Craft_ItemIcon_HPP
#define UE4SS_SDK_ITM_Craft_ItemIcon_HPP

class UITM_Craft_ItemIcon_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UWidgetAnimation* IconReady;
    UBorder* Border_Outside;
    UBorder* BorderBG;
    UImage* ICON_Item;
    UImage* ICON_Padlock;
    UImage* Shadow;
    USizeBox* SizeBox_0;
    TScriptInterface<ICraftable> Item;
    float Size;
    UTextureRenderTarget2D* IconRenderTarget;

    void FreeRenderTarget();
    void SetIconTexture(UObject* Object, UTextureRenderTarget2D* K2Node_DynamicCast_AsTexture_Render_Target_2D, bool K2Node_DynamicCast_bSuccess, UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
    void GetPlayerState(UFSDPlayerState*& AsFSDPlayer State, UPlayerController* CallFunc_GetPlayerController_ReturnValue, UFSDPlayerState* K2Node_DynamicCast_AsFSDPlayer_State, bool K2Node_DynamicCast_bSuccess);
    void PreConstruct(bool IsDesignTime);
    void SetData(InterfaceProperty Item, TSubclassOf<UPlayerCharacter> CharacterClass);
    void Construct();
    void ExecuteUbergraph_ITM_Craft_ItemIcon(int32 EntryPoint, bool Temp_bool_Variable, FLinearColor CallFunc_MenuColors_OutputColor, FLinearColor CallFunc_MenuColors_OutputColor_1, bool Temp_bool_Variable_1, FLinearColor CallFunc_MenuColors_OutputColor_2, bool K2Node_Event_IsDesignTime, FLinearColor CallFunc_MenuColors_OutputColor_3, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, FLinearColor CallFunc_MenuColors_OutputColor_4, int32 CallFunc_GetPlayerRank_ReturnValue, InterfaceProperty K2Node_CustomEvent_Item, TSubclassOf<UPlayerCharacter> K2Node_CustomEvent_CharacterClass, FLinearColor CallFunc_MenuColors_OutputColor_5, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_1, UPlayerCharacterID* CallFunc_GetCharacterID_ReturnValue_2, bool CallFunc_IsOwned_ReturnValue, UVanityItem* K2Node_DynamicCast_AsVanity_Item, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsEquipped_ReturnValue, FLinearColor K2Node_Select_Default, int32 CallFunc_GetRequiredPlayerRank_ReturnValue, bool CallFunc_CanCraft_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, UVanityItem* K2Node_DynamicCast_AsVanity_Item_1, bool K2Node_DynamicCast_bSuccess_1, UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable_2, FLinearColor K2Node_Select_Default_1, UFSDGameInstance* CallFunc_GetFSDGameInstance_ReturnValue, FLinearColor K2Node_Select_Default_2, UIconGenerationManager* CallFunc_GetIconGenerationManager_ReturnValue, UTextureRenderTarget2D* CallFunc_GenerateVanityIcon_Async_icon, UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue);
}

#endif
