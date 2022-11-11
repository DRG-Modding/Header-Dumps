#ifndef UE4SS_SDK_BTTask_SetValueAsBool_HPP
#define UE4SS_SDK_BTTask_SetValueAsBool_HPP

class UBTTask_SetValueAsBool_C : public UBTTask_BlueprintBase
{
    FPointerToUberGraphFrame UberGraphFrame;
    bool ShouldSetToTrue;
    FName VariableName;

    void ReceiveExecute(class AActor* OwnerActor);
    void ExecuteUbergraph_BTTask_SetValueAsBool(int32 EntryPoint);
};

#endif
