#ifndef UE4SS_SDK_BP_Branch_A_HPP
#define UE4SS_SDK_BP_Branch_A_HPP

class ABP_Branch_A_C : AActor
{
    FPointerToUberGraphFrame UberGraphFrame;
    USimpleObjectInfoComponent* SimpleObjectInfo;
    UStaticMeshComponent* SM_DeadTree_Branch_A;
    USimpleHealthComponent* SimpleHealth;
    UStaticMeshComponent* SM_DeadTree_Twig_A;
    UStaticMeshComponent* Twig2;
    float TwigProbability;

    void ReceiveBeginPlay();
    void BndEvt__SimpleHealth_K2Node_ComponentBoundEvent_1_DeathSig__DelegateSignature(UHealthComponentBase* HealthComponent);
    void ExecuteUbergraph_BP_Branch_A(int32 EntryPoint, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RandomFloat_ReturnValue, TArray<USceneComponent*>& CallFunc_GetChildrenComponents_Children, USceneComponent* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, UHealthComponentBase* K2Node_ComponentBoundEvent_HealthComponent, bool CallFunc_Less_IntInt_ReturnValue);
}

#endif
