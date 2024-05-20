#pragma once


class Articulo {
 private:
    int _idArticulo;
    int _sku;
    char _articulo [30];
    char _marca [30];
    char _modelo [30];
    int _numSerie;
    int _tipoArticulo;
    bool _estado;
 public:
    int getIdArticulo();
    int getSku();
    char * getArticulo();
    char* getMarca();
    char* getModelo();
    int getSerie();
    int getTipoArticulo();
    bool getEstado();


    void setIdArticulo(int idArticulo);
    void setSku(int sku);
    void setArticulo(const char* articulo);
    void setMarca(const char* marca);
    void setModelo(const char* modelo);
    void setSerie(int serie);
    void setTipoArticulo(int tipoArticulo);
    void setEstado(bool estado);
    void cargar();
    void mostrar();
};


