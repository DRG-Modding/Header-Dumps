// WidgetBlueprintGeneratedClass ConsoleScreen_XharCustomization.ConsoleScreen_XharCustomization_C
// Size: 0x248 (Inherited: 0x230)
struct UConsoleScreen_XharCustomization_C : UUserWidget {
	UPROPERTY(BlueprintReadWrite) FPointerToUberGraphFrame UberGraphFrame; 
	UPROPERTY(BlueprintReadWrite) UConsoleScreen_BGtemplate_C* ConsoleScreen_BGtemplate; 
	UPROPERTY(BlueprintReadWrite) UConsoleScreen_Notification_C* ConsoleScreen_Notification; 

	UFUNCTION(BlueprintCallable) void Construct();
	UFUNCTION(BlueprintCallable) void OnItemUINotificationChange();
	UFUNCTION(BlueprintCallable) void ExecuteUbergraph_ConsoleScreen_XharCustomization(int32_t EntryPoint);
};

