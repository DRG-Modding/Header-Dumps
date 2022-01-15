#ifndef UE4SS_SDK_ITM_RetirementBadge_HPP
#define UE4SS_SDK_ITM_RetirementBadge_HPP

class UITM_RetirementBadge_C : UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;
    UImage* ICON_Badge;
    int32 Preview Times Retired;
    TArray<TSoftObjectPtr<UTexture2D>> SoftTextures;

    void GetTexture(int32 Index, UTexture2D*& AsTexture 2D, SoftObjectProperty CallFunc_Array_Get_Item, UObject* CallFunc_LoadAsset_Blocking_ReturnValue, UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess);
    void SetTimesRetired(int32 TimesRetired, bool CallFunc_Greater_IntInt_ReturnValue, UTexture2D* CallFunc_SelectIcon_Icon);
    void SetCharacterClass(UFSDPlayerState* PlayerState, UPlayerCharacterID* Character, int32 TimesRetired, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, FCharacterProgress CallFunc_GetCharacterStat_ReturnValue);
    void SelectIcon(int32 RetirementLevel, UTexture2D*& Icon, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, UTexture2D* CallFunc_GetTexture_AsTexture_2D, int32 CallFunc_Subtract_IntInt_ReturnValue, UTexture2D* CallFunc_GetTexture_AsTexture_2D_1);
    void SetData(UFSDPlayerState* Player);
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void ExecuteUbergraph_ITM_RetirementBadge(int32 EntryPoint, UFSDPlayerState* K2Node_CustomEvent_player, UAsyncManager* CallFunc_GetGameInstanceSubsystem_ReturnValue, UPlayerCharacterID* CallFunc_GetSelectedCharacterID_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool K2Node_Event_IsDesignTime, const AsyncLoadCompleteDelegate__DelegateSignature Temp_delegate_Variable);
}

#endif
