// BlueprintGeneratedClass ReplicatedComponent.ReplicatedComponent_C
// Size: 0xd0 (Inherited: 0xb0)
struct UReplicatedComponent_C : UActorComponent {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) float TimeDilation; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate RecieveDilation; 

	UFUNCTION(BlueprintCallable) void Set Time Dilation(float Dilation);
	UFUNCTION(BlueprintCallable) void RPC_Send_Dilation(float Dilation);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ReplicatedComponent(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void RecieveDilation__DelegateSignature(float Dilation);
};

