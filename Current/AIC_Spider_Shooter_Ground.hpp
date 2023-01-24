#ifndef UE4SS_SDK_AIC_Spider_Shooter_Ground_HPP
#define UE4SS_SDK_AIC_Spider_Shooter_Ground_HPP

class AAIC_Spider_Shooter_Ground_C : public AAIC_Spider_C
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void Recieve_BlackboardValueChanged(const FName& KeyName);
    void ExecuteUbergraph_AIC_Spider_Shooter_Ground(int32 EntryPoint);
};

#endif
