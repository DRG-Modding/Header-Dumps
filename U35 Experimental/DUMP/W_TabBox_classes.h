// WidgetBlueprintGeneratedClass W_TabBox.W_TabBox_C
// Size: 0x288 (Inherited: 0x230)
struct UW_TabBox_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UW_TabButton_C* TabConfig; 
	UPROPERTY(BlueprintReadWrite) UW_TabButton_C* TabCreatures; 
	UPROPERTY(BlueprintReadWrite) UW_TabButton_C* TabEnvironment; 
	UPROPERTY(BlueprintReadWrite) UW_TabButton_C* TabGame; 
	UPROPERTY(BlueprintReadWrite) UW_TabButton_C* TabProfiles; 
	UPROPERTY(BlueprintReadWrite) UW_TabButton_C* TabResources; 
	UPROPERTY(BlueprintReadWrite) UHorizontalBox* TabsBox; 
	UPROPERTY(BlueprintReadWrite) UW_TabButton_C* TabTools; 
	UPROPERTY(BlueprintReadWrite) FMulticastInlineDelegate On Tab Index Changed; 

	UFUNCTION(BlueprintCallable) void BndEvt__TabConfig_K2Node_ComponentBoundEvent_0_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	UFUNCTION(BlueprintCallable) void BndEvt__TabCreatures_K2Node_ComponentBoundEvent_1_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	UFUNCTION(BlueprintCallable) void BndEvt__TabEnvironment_K2Node_ComponentBoundEvent_2_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	UFUNCTION(BlueprintCallable) void BndEvt__TabGame_K2Node_ComponentBoundEvent_3_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	UFUNCTION(BlueprintCallable) void BndEvt__TabResources_K2Node_ComponentBoundEvent_4_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	UFUNCTION(BlueprintCallable) void BndEvt__TabTools_K2Node_ComponentBoundEvent_5_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	UFUNCTION(BlueprintCallable) void BndEvt__TabProfiles_K2Node_ComponentBoundEvent_6_Event Tab Button Clicked__DelegateSignature(FText Tab Name);
	UFUNCTION(BlueprintCallable) void Event Active Tab Changed(UW_TabButton_C* Tab Button);
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_W_TabBox(int32_t EntryPoint);
	UFUNCTION(BlueprintCallable) void On Tab Index Changed__DelegateSignature(int32_t Index);
};

