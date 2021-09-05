// BlueprintGeneratedClass Lib_GameObjects.Lib_GameObjects_C
// Size: 0x28 (Inherited: 0x28)
struct ULib_GameObjects_C : UBlueprintFunctionLibrary {

	void Is Actor In Family(enum class EObjectFamily Family, AActor* Actor, UObject* __WorldContext, bool Result);
	void Get Game Object From Actor(AActor* Actor, UObject* __WorldContext, FName Object ID, FFGameObject Object);
	void Get None Object ID(UObject* __WorldContext, FString None Object ID);
	FString Display Name From Game Object(FFGameObject Game Object, UObject* __WorldContext);
	void Get Game Object From Display Name(FString Display Name, UObject* __WorldContext, FName Object ID, FFGameObject Game Object);
	void Get All Game Objects(UObject* __WorldContext, TArray<FFGameObject> Game Objects);
	void Get Game Object(FName Object ID, UObject* __WorldContext, FFGameObject Game Object);
	void Get Game Object By ID(FName Object ID, UObject* __WorldContext, FFGameObject Out Row);
	void Get Game Object By Display Name(FString Display Name, UObject* __WorldContext, FName Array Element);
};

