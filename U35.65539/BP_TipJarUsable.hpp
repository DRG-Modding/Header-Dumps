#ifndef UE4SS_SDK_BP_TipJarUsable_HPP
#define UE4SS_SDK_BP_TipJarUsable_HPP

class UBP_TipJarUsable_C : UBPInstantUsable
{
    FPointerToUberGraphFrame UberGraphFrame;
    int32 TipAmount;

    FText GetUseText(UPlayerCharacter* UserFFormatArgumentData K2Node_MakeStruct_FormatArgumentData, TArray<FFormatArgumentData>& K2Node_MakeArray_Array, FText CallFunc_Format_ReturnValue);
    bool BPCanUse(UPlayerCharacter* User, USceneComponent* UseColliderbool IsDrinking, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, UDrinkableItem* K2Node_DynamicCast_AsDrinkable_Item, bool K2Node_DynamicCast_bSuccess, UFSDSaveGame* CallFunc_GetFSDSaveGame_ReturnValue, int32 CallFunc_GetCredits_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
    void SetTipAmount(int32 Credits);
    void ExecuteUbergraph_BP_TipJarUsable(int32 EntryPoint, int32 K2Node_CustomEvent_Credits);
}

#endif
