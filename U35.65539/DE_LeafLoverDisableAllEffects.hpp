#ifndef UE4SS_SDK_DE_LeafLoverDisableAllEffects_HPP
#define UE4SS_SDK_DE_LeafLoverDisableAllEffects_HPP

class UDE_LeafLoverDisableAllEffects_C : UDrinkEffectComponent
{
    FPointerToUberGraphFrame UberGraphFrame;
    float TargetScale;
    APlayerCharacter* Character;
    float StartScale;
    float Progress;

    void OnStartEffect(UPlayerCharacter* Character);
    void ExecuteUbergraph_DE_LeafLoverDisableAllEffects(int32 EntryPoint, UPlayerCharacter* K2Node_Event_character, TArray<UDrinkEffectComponent*>& CallFunc_K2_GetComponentsByClass_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 CallFunc_Array_Length_ReturnValue, UDrinkEffectComponent* CallFunc_Array_Get_Item, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue);
}

#endif
