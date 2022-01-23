#ifndef UE4SS_SDK_BP_Azure_CombaCharm_Egg_HPP
#define UE4SS_SDK_BP_Azure_CombaCharm_Egg_HPP

class ABP_Azure_CombaCharm_Egg_C : public ABP_Phys_KickableObject_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;
    class USimpleObjectInfoComponent* SimpleObjectInfo;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Azure_CombaCharm_Egg(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_1, float CallFunc_RandomFloatInRange_ReturnValue_2, FVector CallFunc_MakeVector_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue_3, float CallFunc_RandomFloatInRange_ReturnValue_4, float CallFunc_RandomFloatInRange_ReturnValue_5, FVector CallFunc_MakeVector_ReturnValue_1);
};

#endif
