#ifndef UE4SS_SDK_AIC_Spider_Boss_TwinBase_HPP
#define UE4SS_SDK_AIC_Spider_Boss_TwinBase_HPP

class AAIC_Spider_Boss_TwinBase_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void StartSpeedModifier();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Spider_Boss_TwinBase(int32 EntryPoint);
};

#endif
