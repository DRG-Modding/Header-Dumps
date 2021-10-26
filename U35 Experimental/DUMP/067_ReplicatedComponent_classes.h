// BlueprintGeneratedClass 067_ReplicatedComponent.067_ReplicatedComponent_C
// Size: 0xd0 (Inherited: 0xb0)
struct U067_ReplicatedComponent_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) int32_t RASCount; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate ReceiveEvent; 

	UFUNCTION(BlueprintCallable) void Set RASCount(int32_t NewCount);
	UFUNCTION(BlueprintCallable) void RPC_Send_Count(int32_t RASCount);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_067_ReplicatedComponent(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void ReceiveEvent__DelegateSignature(int32_t RASCounter);
};

