#ifndef UE4SS_SDK_TSK_OpenTray_HPP
#define UE4SS_SDK_TSK_OpenTray_HPP

class UTSK_OpenTray_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    FName TrayOpen;
    bool Open;

    void ReceiveExecuteAI(class AAIController* OwnerController, class APawn* ControlledPawn);
    void ExecuteUbergraph_TSK_OpenTray(int32 EntryPoint);
};

#endif
