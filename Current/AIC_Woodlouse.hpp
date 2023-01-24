#ifndef UE4SS_SDK_AIC_Woodlouse_HPP
#define UE4SS_SDK_AIC_Woodlouse_HPP

class AAIC_Woodlouse_C : public AEnemyAIController
{
    FPointerToUberGraphFrame UberGraphFrame;

    void ReceiveBeginPlay();
    void ExecuteUbergraph_AIC_Woodlouse(int32 EntryPoint);
};

#endif
