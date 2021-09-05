// BlueprintGeneratedClass GlobalFunctionsV4.GlobalFunctionsV4_C
// Size: 0x28 (Inherited: 0x28)
struct UGlobalFunctionsV4_C : UBlueprintFunctionLibrary {

	void On Spacerig(UObject* __WorldContext, bool On Spacerig);
	void Get Common HUD(UObject* __WorldContext, FNone* Widget);
	void LoadSaveData(USaveGame* Save Class, FString Save File Path, UObject* __WorldContext, USaveGame* Save Game);
	void GetBiomeName(bool Return Raw Name, UObject* __WorldContext, FString Biome);
	void GetRandomPointOnMesh(AActor* Actor, TArray<FVector> Verts, TArray<int32_t> Tris, UObject* __WorldContext, FVector Point);
	void GetRandomTriangleAxisPoint(float A, float B, float C, float P, float Q, UObject* __WorldContext, float X);
	void GetRandomPointInTriangle(FVector A, FVector B, FVector C, UObject* __WorldContext, FVector Point);
	void GetTransformWithRandomZRotation(FVector Location, UObject* __WorldContext, FTransform Transform);
	void GetString(UTextBlock* TextUI, UObject* __WorldContext, FString String);
	void Get Uniform Random Scale Axis(float Min, float Max, UObject* __WorldContext, float Value);
	void TextToInt(UEditableTextBox* TextBox, UObject* __WorldContext, int32_t Int Value);
	void TextToFloat(UEditableTextBox* TextBox, UObject* __WorldContext, float Float Value);
	void TextBoxTimeToSeconds(UEditableTextBox* Mins, UEditableTextBox* Secs, UObject* __WorldContext, float Seconds);
};

