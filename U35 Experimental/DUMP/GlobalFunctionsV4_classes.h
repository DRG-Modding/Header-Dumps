// BlueprintGeneratedClass GlobalFunctionsV4.GlobalFunctionsV4_C
// Size: 0x28 (Inherited: 0x28)
struct UGlobalFunctionsV4_C : UBlueprintFunctionLibrary {

	UFUNCTION(BlueprintCallable) void On Spacerig(UObject* __WorldContext, bool On Spacerig);
	UFUNCTION(BlueprintCallable) void Get Common HUD(UObject* __WorldContext, UCommonHUD_C* Widget);
	UFUNCTION(BlueprintCallable) void LoadSaveData(USaveGame* Save Class, FString Save File Path, UObject* __WorldContext, USaveGame* Save Game);
	UFUNCTION(BlueprintCallable) void GetBiomeName(bool Return Raw Name, UObject* __WorldContext, FString Biome);
	UFUNCTION(BlueprintCallable) void GetRandomPointOnMesh(AActor* Actor, TArray<FVector> Verts, TArray<int32_t> Tris, UObject* __WorldContext, FVector Point);
	UFUNCTION(BlueprintCallable) void GetRandomTriangleAxisPoint(float A, float B, float C, float P, float Q, UObject* __WorldContext, float X);
	UFUNCTION(BlueprintCallable) void GetRandomPointInTriangle(FVector A, FVector B, FVector C, UObject* __WorldContext, FVector Point);
	UFUNCTION(BlueprintCallable) void GetTransformWithRandomZRotation(FVector Location, UObject* __WorldContext, FTransform Transform);
	UFUNCTION(BlueprintCallable) void GetString(UTextBlock* TextUI, UObject* __WorldContext, FString String);
	UFUNCTION(BlueprintCallable) void Get Uniform Random Scale Axis(float Min, float Max, UObject* __WorldContext, float Value);
	UFUNCTION(BlueprintCallable) void TextToInt(UEditableTextBox* TextBox, UObject* __WorldContext, int32_t Int Value);
	UFUNCTION(BlueprintCallable) void TextToFloat(UEditableTextBox* TextBox, UObject* __WorldContext, float Float Value);
	UFUNCTION(BlueprintCallable) void TextBoxTimeToSeconds(UEditableTextBox* Mins, UEditableTextBox* Secs, UObject* __WorldContext, float Seconds);
};

